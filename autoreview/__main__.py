from .lista import Lista
import asyncio
import os
import sys

path = sys.argv[1]
lista = Lista(path)

lista.review()
