
<!-- Exercício 1 - Prof. Dr. Vinícius - FATEC BAURU-SP -->
<!-- Aluno Silvio Thales C Silva -->
<!-- Criar um programa que recebe uma frase do usuário e retorna a quantidade de palavras presente na frase -->


<!DOCTYPE html>
    <html>
        <head>
            <title>Contador de Palavras simplificado</title>
        </head>
    <body>
        <h1>Contador de Palavras</h1>
 
<form method="post">
<label for="frase">Digitar uma frase:</label>
<input type="text" name="frase" id="frase">
<input type="submit" value="Contar Palavras">
</form>
 
<?php // início do php
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
        
        $frase = $_POST["frase"];
        
        $palavras = explode(" ", $frase);
        
        $quantidadePalavras = count($palavras);
        
        echo "<p>A frase contém $quantidadePalavras palavras.</p>";
        }
?>
<?
// fim do php
?>
</body>
</html>
