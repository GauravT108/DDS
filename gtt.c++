{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyPYzTAt97vZlmPxRtrN1YcY",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/GauravT108/DDS/blob/main/gtt.c%2B%2B\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 6,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "-64iD68K4hnQ",
        "outputId": "dfe08ad6-2927-4606-8979-d6f20d69625a"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting factorial.cpp\n"
          ]
        }
      ],
      "source": []
    },
    {
      "cell_type": "code",
      "source": [],
      "metadata": {
        "id": "VtgKcxgS5CqP"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile factorial.cpp\n",
        "\n",
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "int factorial(int n) {\n",
        "    if (n == 1)\n",
        "        return 1; // base case\n",
        "    else\n",
        "        return n * factorial(n - 1); // recursive call\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int num = 5;\n",
        "    cout << \"Factorial of \" << num << \" is \" << factorial(num) << endl;\n",
        "    return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "kAK5ZnRe69HG",
        "outputId": "ad93615c-433a-4d19-a5af-8d5cb4d0a6e3"
      },
      "execution_count": 8,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting factorial.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Rgcd.cpp\n",
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "// Recursive function to find GCD\n",
        "int gcd(int a, int b) {\n",
        "    if (b == 0)\n",
        "        return a;\n",
        "    return gcd(b, a % b);\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int a = 66, b = 18;\n",
        "    cout << \"GCD of \" << a << \" and \" << b << \" is: \" << gcd(a, b) << endl;\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "stbTmLqO9Lc_",
        "outputId": "84d4ca0f-bdcb-405c-eda0-d70d14bb63e0"
      },
      "execution_count": 9,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing Rgcd.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile fibonacci.cpp\n",
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void fibonacci(int n) {\n",
        "   int a = 0, b = 1, next;\n",
        "\n",
        "   for (int i = 0; i < n; ++i) {\n",
        "    cout << a << \" \";\n",
        "    next = a + b;\n",
        "    a = b;\n",
        "    b = next;\n",
        "   }\n",
        "   cout << endl;\n",
        "}\n",
        "\n",
        "int main() {\n",
        "   int terms;\n",
        "   cout << \"enter he number of terma \" ;\n",
        "   cin >> terms;\n",
        "   cout << \"Fibonacci series upto \" << terms << \" terms: \" << endl;\n",
        "   fibonacci(terms);\n",
        "   return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "bJUFNrIABky_",
        "outputId": "74d2085c-f240-4c83-93d5-0112aa6413b4"
      },
      "execution_count": 11,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting fibonacci.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "<"
      ],
      "metadata": {
        "id": "03NKF7QdB5Yo"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}