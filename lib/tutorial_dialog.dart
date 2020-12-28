import 'package:flutter/material.dart';

class TutorialDialog extends StatefulWidget {

	TutorialDialog({this.onlyPage});

	final int onlyPage;

	@override
	_TutorialDialogState createState() => _TutorialDialogState();
}

class _TutorialDialogState extends State<TutorialDialog> {

	int _curPage;

	@override
	void initState() {
		_curPage = widget.onlyPage ?? 0;
		super.initState();
	}

	List<Map<String, Widget>> get _texts => [
		{
			'title' : Text('Select picture', style: TextStyle(fontWeight: FontWeight.bold),),
			'content' : Column(
				mainAxisSize: MainAxisSize.min,
				children: [
					Text("""Take a picture of a key, removed from its key ring, and place in the middle of an ISO/CEI 7810 ID-1 sized card (credit card, business card...). 
It is very important that the card measures exactly 85,60 by 53,98 mm (3 3⁄8 in × 2 1⁄8 in).
""", textAlign: TextAlign.justify,),
					Image.asset('assets/card_key.png'),
					Text("\nA well lightened and high res picture will give better results.", textAlign: TextAlign.justify,),
				],
			)
		},
		{
			'title' : Text('Crop image', style: TextStyle(fontWeight: FontWeight.bold),),
			'content' : Column(
				mainAxisSize: MainAxisSize.min,
				children: [
					Text('''Use the green lines to crop the image to only retain the card.
You can zoom to be more precise.
''', textAlign: TextAlign.justify,),
					Image.asset('assets/crop_card.png'),
				],
			)
		},
		{
			'title' : Text('Align back line', style: TextStyle(fontWeight: FontWeight.bold),),
			'content' : Column(
				mainAxisSize: MainAxisSize.min,
				children: [
					Text('''Align the red line to match the back of the key.
''', textAlign: TextAlign.justify,),
					Image.asset('assets/back_key.png'),
				],
			)
		},
		{
			'title' : Text('Align shoulder line', style: TextStyle(fontWeight: FontWeight.bold),),
			'content' : Column(
				mainAxisSize: MainAxisSize.min,
				children: [
					Text('''Align the blue line to the shoulder of the key.
''', textAlign: TextAlign.justify,),
					Image.asset('assets/shoulder_key.png'),
				],
			)
		},
		{
			'title' : Text('Measure', style: TextStyle(fontWeight: FontWeight.bold),),
			'content' : Column(
				mainAxisSize: MainAxisSize.min,
				children: [
					Text('''Now, you can place points in the middle of each cuts of your key.
Once done, you can validate and retrieve your measures on your project's page.
''', textAlign: TextAlign.justify,),
					Image.asset('assets/measure_key.png'),
				],
			)
		},
	];

	@override
	Widget build(BuildContext context) {
		return Container(
			child: AlertDialog(
				title: _texts[_curPage]['title'],
				content: _texts[_curPage]['content'],
				actions: (_curPage > 0) ? ([
					Visibility(
						visible: widget.onlyPage == null,
						child: FlatButton(
							onPressed: () {
								setState(() => _curPage--);
							},
							child: Text('Back'),
						),
					),
					FlatButton(
						onPressed: () {
							if (_curPage + 1 >= _texts.length || widget.onlyPage != null)
								Navigator.pop(context);
							else
								setState(() => _curPage++);
						},
						child: Text('Continue'),
					),
				]) : ([
					FlatButton(
						onPressed: () {
							if (_curPage + 1 >= _texts.length || widget.onlyPage != null)
								Navigator.pop(context);
							else
								setState(() => _curPage++);
						},
						child: Text('Continue'),
					),
				]),
			),
		);
	}
}