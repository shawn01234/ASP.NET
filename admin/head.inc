<!--BEGIN HEADER MODULE-->
<script>
	var linksrcTop;
	var linksrcLeft;
	var linksrcH;
	var linksrcW;
	var isShow = false;
	var mArray;
	var mArrayURL;

	function showMenu(menu,tableW)
	{
		switch (menu)
		{
			case '1' :mArray = new Array('ѧ����Ϣ����','ѧ����Ϣά��');mArrayURL = new Array('studentInfoAdd.asp','studentInfoManage.asp');break;
			case '2' :mArray = new Array('��ʦ��Ϣ����','��ʦ��Ϣά��');mArrayURL = new Array('teacherInfoAdd.asp','teacherInfoManage.asp');break;
			case '3' :mArray = new Array('����רҵ��Ϣ','רҵ��Ϣά��','���Ӱ༶��Ϣ','�༶��Ϣά��');mArrayURL = new Array('specialFieldInfoAdd.asp','specialFieldInfoManage.asp','classInfoAdd.asp','classInfoManage.asp');break;
			case '4' :mArray = new Array('���ӱ��޿γ�','���޿γ̹���','���ӹ�ѡ�γ�','��ѡ�γ̹���');mArrayURL = new Array('classCourseInfoAdd.asp','classCourseInfoManage.asp','publicCourseInfoAdd.asp','publicCourseInfoManage.asp');break;
			case '5' :mArray = new Array('�༶�γ��ſ�','ѡ�޿γ��ſ�');mArrayURL = new Array('classCourseTeachMakeFirst.asp','publicCourseTeachMakeFirst.asp');break;
			
			case '6' :mArray = new Array('ѧ����Ϣ����','�޸ĵ�½����','ϵͳ��������','����ϵͳ');mArrayURL = new Array('termInfoManage.asp','passwordSet.asp','systemConfig.asp','../System/systemInfo.asp');break;
			case '7' :mArray = new Array('����ѧ���ɼ�','�ɼ���Ϣ��ѯ');mArrayURL = new Array('../Teacher/scoreInfoAdd.asp','../Teacher/scoreInfoQuery.asp');break;
		
		}
		
		if( mArray !=null )
		{
			var linksrc =window.event.srcElement;
			linksrcTop = linksrc.offsetTop;
			linksrcLeft = linksrc.offsetLeft;
			linksrcH = linksrc.offsetHeight;
			linksrcW = linksrc.offsetWidth;
			linksrcParent = linksrc.offsetParent;
			while(linksrcParent.tagName.toUpperCase()!="BODY")
			{
				linksrcTop += parseInt(linksrcParent.offsetTop);
				linksrcLeft += parseInt(linksrcParent.offsetLeft);
				linksrcParent = linksrcParent.offsetParent;
			}

			//linksrcTop += document.body.scrollTop;
			//linksrcLeft += document.body.scrollLeft;

			mdiv = document.getElementById("menuDiv");
			mdiv.style.left = linksrcLeft + 8;
			mdiv.style.top = linksrcTop + linksrcH; 

			text ="<table width='96' border='0' cellpadding='3' cellspacing='0' bgcolor='e8e8e8' class='tbl'>";
			for(var i=0;i<mArray.length;i++)
			{
				text += "<tr>";
				if(i==mArray.length-1)
				{
					text += "<td align='center'>";
				}
				else
				{
					text += "<td align='center' class='bottom'>";
				}
				text+="<a href='" + mArrayURL[i] + "' target='ContentFrame'>" + mArray[i];
				text+="</a></td></tr>";
			}
			text +="</table>"; 
			mdiv.innerHTML = text;
			mdiv.style.visibility="visible";
			isShow = true;
		}
	}

	function hiddenMenu()
	{
		if (isShow == true)
		{
			var mx = document.body.scrollLeft + window.event.clientX;
			var my = document.body.scrollTop + window.event.clientY;
			mdiv=document.all.menuDiv;
			mdivT = parseInt(mdiv.style.top);
			mdivL = parseInt(mdiv.style.left);
			
			mdivH = parseInt(mdiv.offsetHeight);
			mdivW = parseInt(mdiv.offsetWidth);
			
			if(mx < mdivL || mx > mdivL + mdivW || my < linksrcTop || my > linksrcTop + linksrcH + mdivH)
			{
				mdiv.style.visibility = "hidden";isShow = false;
			}
										
		}
	}	    
</script>
<!--   �˵���   -->
<div id="menuDiv" style="VISIBILITY: hidden; POSITION: absolute">
</div>
<FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����">
</FONT><FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����">
</FONT><FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����">
</FONT><FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����"></FONT><FONT face="����">
</FONT>
<!--   /�˵���   -->
<table class="tbl" id="Table2" cellSpacing="0" cellPadding="0" width="760" border="0">
	<tr>
		<td background="../images/titl_bg.jpg" height="20" align="right">
			<!--   ����������   --> &nbsp;&nbsp;
			<span onmouseover="showMenu('1',100)" style="COLOR: black;"><font color="#ffffff">ѧ����Ϣ����</font></span>&nbsp;<font color="#ffffff">��</font>&nbsp; 
			<span onmouseover="showMenu('2',100)" style="COLOR: black;"><font color="#ffffff">��ʦ��Ϣ����</font></span>&nbsp;<font color="#ffffff">��</font>&nbsp;
			<span onmouseover="showMenu('3',100)" style="COLOR: black;"><font color="#ffffff">�༶��Ϣ����</font></span>&nbsp;<font color="#ffffff">��</font>&nbsp;
			<span onmouseover="showMenu('4',100)" style="COLOR: black;"><font color="#ffffff">�γ���Ϣ����</font></span>&nbsp;<font color="#ffffff">��</font>&nbsp;
			<span onmouseover="showMenu('5',100)" style="COLOR: black;"><font color="#ffffff">�ſ���Ϣ����</font></span>&nbsp;<font color="#ffffff">��</font>&nbsp; 
			
			<span onmouseover="showMenu('6',100)" style="COLOR: black;"><font color="#ffffff">ϵͳ����</font></span>&nbsp;<font color="#ffffff">��</font>&nbsp; 
			<span onmouseover="showMenu('7',100)" style="COLOR: black;"><font color="#ffffff">�ɼ���Ϣ����</font></span>&nbsp;<font color="#ffffff">��</font>&nbsp;

<A style="COLOR: black" href='../Logout.asp'><font color="#ffffff">�� ��</font></A> &nbsp;&nbsp;
<!--   /�������˵�   --></td>
	</tr>
	
</table>