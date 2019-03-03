

<html>
<body>



Line one probably has <?php $_POST["line1"]; ?>

<?php $str = $_POST["line1"];
$wSpace = strlen($str); 

$str2 = str_replace(" ", "", $str);

$nSpace = strlen($str2);

$total = ($wSpace - $nSpace)+1;

$sil = ($total * (3/2)) + (1/2);

echo (round($sil)); ?> syllables <br>





Line two probably has <?php $_POST["line2"]; ?>

<?php $str = $_POST["line2"];
$wSpace = strlen($str); 

$str2 = str_replace(" ", "", $str);

$nSpace = strlen($str2);

$total = ($wSpace - $nSpace)+1;

$sil = ($total * (3/2)) + (1/2);

echo (round($sil)); ?> syllables <br>




Line three probably has <?php $_POST["line3"]; ?>

<?php $str = $_POST["line3"];
$wSpace = strlen($str); 

$str2 = str_replace(" ", "", $str);

$nSpace = strlen($str2);

$total = ($wSpace - $nSpace)+1;

$sil = ($total * (3/2)) + (1/2);

echo (round($sil)); ?> syllables <br>



</body>
</html>