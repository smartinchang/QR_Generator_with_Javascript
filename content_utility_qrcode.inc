<center>
<br><br>
<h1>TẠO MÃ QR</h1>
Nhập nội dung cần tạo mã: <input type="text" id="text" size="40" placeholder="Nhập nội dung" value="XUÂN TUYẾN Network"> <button type="submit" class="btn btn-primary" onclick="makeCode()">Tạo mã</button>
<br><br>
<div id="qrcode" style="width:200px; height:200px;"></div>
<script type="text/javascript" src="js/qrcode.js"></script>
<script type="text/javascript">
 var qrcode = new QRCode(document.getElementById("qrcode"), {width: 200, height: 200});
 function makeCode()
 {
  var elText = document.getElementById("text");
  if (!elText.value)
  {
   alert("Input a text");
   elText.focus();
   return;
  }
  qrcode.makeCode(elText.value);
 }
 makeCode();
</script>
</center>
<br><br><br><br><br><br><br><br>