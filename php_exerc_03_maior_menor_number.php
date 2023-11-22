
<!-- Exercício 1 - Prof. Dr. Vinícius - FATEC BAURU-SP -->
<!-- Aluno Silvio Thales C Silva -->
<!-- Criar um prog. que recebe uma lista de números do usuário e retorna o maior e o menor número da lista.  -->



<!DOCTYPE html>
        <html>
            <head>
            <title>Encontrar o maior e o menor número</title>
            </head>
            <body>
        <h2>Listar o maior e o menor número</h2>
            <form method="post">
            <label for="numbers">Insira números separados por vírgulas:</label>
            <input type="text" name="numbers" id="numbers">
            <input type="submit" value="Encontrar">
        </form>

        <?php
            if ($_SERVER["REQUEST_METHOD"] == "POST") {

                $number_list = $_POST["numbers"];
                $numbers = explode(",", $number_list);

                $numbers = array_map('trim', $numbers);
                $numbers = array_map('intval', $numbers);

                $max = max($numbers);
                $min = min($numbers);

            echo "<p>O maior número é: $max</p>";
            echo "<p>O menor número é: $min</p>";
            }
        ?>
        </body>
</html>