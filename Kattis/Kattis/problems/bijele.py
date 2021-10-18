king, queen, rook, bishop, knight, pawn = map(int, input().split())

king = 1 - king
queen = 1 - queen
rook = 2 - rook
bishop = 2 - bishop
knight = 2 - knight
pawn = 8 - pawn

print(king, queen, rook, bishop, knight, pawn)