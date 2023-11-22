
<!-- Exercício 1 - Prof. Dr. Vinícius - FATEC BAURU-SP -->
<!-- Aluno Silvio Thales C Silva -->
<!-- Criar um programa que recebe um número do usuário e retorna se o número é positivo, negativo ou zero. -->

<?php
        
        if (isset($_POST['numero'])) {
        $numero = $_POST['numero'];
        
        if ($numero > 0) {
        $resultado = "O número é positivo.";
        } elseif ($numero < 0) {
        $resultado = "O número é negativo.";
        } else {
        $resultado = "O número é zero.";
        }
            } else {
            $numero = null;
            $resultado = "";
            }
            ?>
        
            <!DOCTYPE html>
            <html>
            <head>
            <title>Verificador de Número</title>
            </head>
            <body>
            <h1>Verificador de Número Positivo, Negativo ou Zero</h1>
            <form method="post">
            <label for="numero">Digite um número para o check: </label>
            <input type="number" name="numero" id="numero" required>
            <button type="submit">Verificar</button>
            </form>
        
            <?php if (!is_null($numero)) : ?>
            <p>O número digitado é: <?php echo $numero; ?></p>
            <p><?php echo $resultado; ?></p>
    <?php endif; ?>
</body>
</html>

