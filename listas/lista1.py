import pexpect


def atv01(bin, in1, in2, out) -> None:
    """
    Faça um programa que receba dois numeros e mostre a soma entre eles caso seja maior que 10
    """
    child = pexpect.spawn(bin)
    child.sendline(in1)
    child.sendline(in2)
    child.expect(out)
    child.kill(0)


