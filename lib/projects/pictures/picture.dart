import 'dart:io';

import 'package:image_picker/image_picker.dart';
import 'package:path/path.dart' as path;
import 'package:path_provider/path_provider.dart';

class Picture {

	static ImagePicker _imagePicker = ImagePicker();

	static Future<Directory> pictureDirectory() async {
		final appDir = await getApplicationSupportDirectory();
		final dir = Directory('${appDir.path}/pictures');
		return dir.create(recursive: true);
	}

	static Future<File> getImageFromSource(ImageSource selection) async {
		/**
		 * Retrieve or Take picture and keep file in intern data.
		 * 
		 * For now, we mv or cp to appdata
		 * /!\ For [ImageSource.camera], src and dst are not on the same filesystem so `OS Error: Cross-device link, errno = 18` is thrown when mv)
		 * Currently mv algorithm : create dst, cp src dst, rm src
		 * 
		 * TODO Replace all by Symilnk?
		 */

		// Retrieve image via selected source
		PickedFile pickedPicture = await _imagePicker.getImage(source: selection);

		if (pickedPicture == null)
			return null;

		final picDir = await pictureDirectory();

		String pathSavedRaw = path.join(picDir.path, path.basename(pickedPicture.path));

		// Move picture if taken, or copy if it comes from gallery
		if(selection == ImageSource.camera) {
			File savedFile;
			try {
				savedFile = File(pickedPicture.path).renameSync(pathSavedRaw);
			} on FileSystemException {
				// if rename fails, copy the source file and then delete it
				final fpicked = File(pickedPicture.path);
				savedFile = fpicked.copySync(pathSavedRaw);
				fpicked.delete();
			}
			return savedFile;
		}
		else
			return File(pickedPicture.path).copySync(pathSavedRaw);
	}
}