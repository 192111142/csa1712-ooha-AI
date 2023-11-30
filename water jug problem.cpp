python for water jug problem


def pour(from_jug, to_jug, amount):
    from_jug.volume -= amount
    to_jug.volume += amount

class Jug:
    def __init__(self, max_volume, current_volume=0):
        self.max_volume = max_volume
        self.volume = current_volume

def solve(a, b, target):
    jugA = Jug(a, 0)
    jugB = Jug(b, 0)

    while jugB.volume != target:
        if jugA.volume == 0:
            jugA.volume = jugA.max_volume
        elif jugB.volume == jugB.max_volume:
            jugB.volume = 0
        else:
            amount = min(jugA.volume, jugB.max_volume - jugB.volume)
            pour(jugA, jugB, amount)

    return jugA.volume

if __name__ == "__main__":
    a = int(input("Enter the max volume of Jug A: "))
    b = int(input("Enter the max volume of Jug B: "))
    target = int(input("Enter the target volume: "))

    result = solve(a, b, target)
    print("Jug A has", result, "units of water.")


