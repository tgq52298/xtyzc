function checkusername() {
	var myform = document.getElementById("form1");
	var name = myform.name.value.length;
	var namez = /[\u4e00-\u9fa5]/;
	if (!namez.test(myform.name.value)) {
		errMsg_nickname.innerHTML = "<font color='red'>请输入正确姓名</font>";
		return false;
	} else if (name < 2 || name > 5) {
		errMsg_nickname.innerHTML = "<font color='red'>名字长度为2-5</font>";
		return false;
	} else {
		errMsg_nickname.innerHTML = "<font color='green'>用户名正确</font>";
		return true;
	}
}

function checkphone() {
	var myform = document.getElementById("form1");
	var phone = myform.phone.value;
	var phonez = /^1[3456789]\d{9}$/;
	if (!phonez.test(myform.phone.value)) {
		errMsg_telephone.innerHTML = "<font color='red'>请输入正确手机号</font>";
		return false;
	} else if (phone != parseInt(phone)) {
		errMsg_telephone.innerHTML = "<font color='red'>请输入正确手机号</font>";
		return false;
	} else {
		errMsg_telephone.innerHTML = "<font color='green'>手机号正确</font>";
		return true;
	}
}

function checkcontent() {
	var myform = document.getElementById("form1");
	var content = myform.content.value.length;
	var contentz = /[\u4e00-\u9fa5]/;
	if (!contentz.test(myform.content.value)) {
		errMsg_content.innerHTML = "<font color='red'>请输入中文</font>";
		return false;
	} else if (content < 6 || content > 198) {
		errMsg_content.innerHTML = "<font color='red'>留言内容长度为6-198</font>";
		return false;
	} else {
		errMsg_content.innerHTML = "<font color='green'>留言正确</font>";
		return true;
	}
}


function checkform() {
	checkusername();
	checkphone();
	checkcontent();
	if (checkusername() && checkphone() && checkcontent()) {
		return true;
	} else {
		return false;
	}
}

var abc=document.getElementById("form1").onsubmit=function(){
	 return checkform()
}
