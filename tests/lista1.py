from autoreview.lista import Lista
import pexpect


def atv01Impl(binary: str, n1: str, n2: str, output: str):
    child = pexpect.spawn(binary)
    child.sendline(n1)
    child.sendline(n2)
    child.expect(output)


class Lista1(Lista):
    def atv01(self, binary: str):
        atv01Impl(binary, "12", "12", "24")
        atv01Impl(binary, "1", "1", "24")
        atv01Impl(binary, "2", "2", "190231")


lista1 = Lista1("./test_samples/")
lista1.review()
