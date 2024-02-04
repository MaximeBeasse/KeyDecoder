import 'package:flutter/material.dart';

class DisclamerDialog extends StatefulWidget {
	@override
	_DisclamerDialogState createState() => _DisclamerDialogState();
}

class _DisclamerDialogState extends State<DisclamerDialog> {

	int _curPage = 0;

	@override
	void initState() {
		super.initState();
	}

	static const List<Map<String, String>> _texts = [
		{
			'title' : 'Making keys without consent is illegal.',
			'content' : '''This Key Decoding application is only meant for legal use. If you have unlawful intentions, your are not allowed to used this application.
To limit the risk of illegal use, an ISO sized card is necessary to decode a mechanical key, and the key must be taken off from its keyring.
We will provide no help nor assistance to any user that we believe is willing to commit a crime or a felony. '''
		},
		{
			'title' : 'Educational and Consulting use only.',
			'content' : '''This Key Decoding app is meant to be used by Pentesters during their audits, to explain their clients how easily a criminal can duplicate keys (from picture, by molding or simply by asking a local locksmith to make a duplicate). Fair use is allowed if used by security enthusiasts, to assess their own security, and discover the difficulty of making keys only using a picture. 
The authors DO NOT ALLOW any users to sell keys created with the help of this app. Rulebreakers are subject to lawsuit.'''
		},
		{
			'title' : 'Security advice.',
			'content' : '''If you want to protect yourself from having your keys duplicated without your consent (with a picture, or by molding, or more simply by someone asking a locksmith to make a copy), you are invited to apply the same best practices to your keys as you do with your Credit Card or your Password. Just like credit cards and passwords, you must not lend your keys, or leave them unattended.'''
		},
		{
			'title' : 'Have Fun, Stay Legal, \nHide your keys.'
		}
	];

	@override
	Widget build(BuildContext context) {
		return AlertDialog(
			title: Text(_texts[_curPage]['title']!, textAlign: (_texts[_curPage]['content'] != null) ? TextAlign.start : TextAlign.center,),
			content: _texts[_curPage]['content'] == null ? null : Text(_texts[_curPage]['content']!, textAlign: TextAlign.justify,),
			actions: (_curPage > 0) ? ([
				TextButton(
					onPressed: () {
						setState(() => _curPage--);
					},
					child: Text('Back'),
				),
				TextButton(
					onPressed: () {
						if (_curPage + 1 >= _texts.length)
							Navigator.pop(context);
						else
							setState(() => _curPage++);
					},
					child: Text('Continue'),
				),
			]) : ([
				TextButton(
					onPressed: () {
						setState(() => _curPage++);
					},
					child: Text('Continue'),
				),
			]),
		);
	}
}