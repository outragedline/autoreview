from autoreview.lista import Lista
import pexpect


def atv01Impl(binary: str, n1: int, n2: int):
    child = pexpect.spawn(binary)
    child.sendline(f"{n1}")
    child.sendline(f"{n2}")
    if n1 + n2 > 10:
        child.expect(f"{n1 + n2}")


class Lista1(Lista):
    def atv01(self, binary: str):
        atv01Impl(binary, 12, 12)
        atv01Impl(binary, 10, 10)
        atv01Impl(binary, 5, 6)
        atv01Impl(binary, 1, 1)


lista1 = Lista1("./test_samples/")
lista1.review()
