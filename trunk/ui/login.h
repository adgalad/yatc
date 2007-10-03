#ifndef __UI_LOGIN_H
#define __UI_LOGIN_H

class winLogin_t {
public:

	glictWindow window;
	glictPanel pnlUsername, pnlPassword, pnlCreateAc;
	glictTextbox txtUsername, txtPassword;
	glictButton btnCreateAc;

	glictPanel pnlSeparator;

	glictButton btnOk, btnCancel;

	winLogin_t() {

		window.SetWidth(231-4);
		window.SetHeight(173-17);
		window.SetCaption("Enter Game");
		window.SetVisible(false);

		window.AddObject(&pnlUsername);
		window.AddObject(&txtUsername);
		window.AddObject(&pnlPassword);
		window.AddObject(&txtPassword);
		window.AddObject(&pnlCreateAc);
		window.AddObject(&btnCreateAc);
		window.AddObject(&pnlSeparator); /* **** */
		window.AddObject(&btnOk);
		window.AddObject(&btnCancel);

		pnlUsername.SetWidth(131-17);
		pnlUsername.SetHeight(12);
		pnlUsername.SetCaption("Account number:");
		pnlUsername.SetPos(13,17);
		pnlUsername.SetBGActiveness(false);

		txtUsername.SetPos(128,15);
		txtUsername.SetWidth(216-134);
		txtUsername.SetHeight(46-33);

		pnlPassword.SetWidth(131-17);
		pnlPassword.SetHeight(12);
		pnlPassword.SetCaption("Password:");
		pnlPassword.SetPos(13,47);
		pnlPassword.SetBGActiveness(false);

		txtPassword.SetPos(128,45);
		txtPassword.SetWidth(216-134);
		txtPassword.SetHeight(46-33);
		txtPassword.SetPassProtectCharacter('*');

		pnlCreateAc.SetWidth(131-17);
		pnlCreateAc.SetHeight(12);
		pnlCreateAc.SetCaption("If you don't have\nan account yet::");
		pnlCreateAc.SetPos(13,85);
		pnlCreateAc.SetBGActiveness(false);

		btnCreateAc.SetPos(128,94);
		btnCreateAc.SetWidth(216-133);
		btnCreateAc.SetHeight(112-95);
		btnCreateAc.SetCaption("Create Account");
		btnCreateAc.SetBGColor(.2,.2,.2,1.);

		pnlSeparator.SetPos(9, 121);
		pnlSeparator.SetBGColor(.1,.1,.1,1.);
		pnlSeparator.SetWidth(222-13);
		pnlSeparator.SetHeight(2);

		btnOk.SetPos(127-4,148-17);
		btnOk.SetWidth(40);
		btnOk.SetHeight(166-149);
		btnOk.SetCaption("Ok");
		btnOk.SetBGColor(.1,.1,.1,1.);

		btnCancel.SetPos(180-4,148-17);
		btnCancel.SetWidth(40);
		btnCancel.SetHeight(166-149);
		btnCancel.SetCaption("Cancel");
		btnCancel.SetBGColor(.1,.1,.1,1.);

	}
};

#endif
