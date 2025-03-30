class Club:
    members_count = 0  # Class variable

    @classmethod
    def add_member(cls):
        cls.members_count += 1

Club.add_member()
Club.add_member()
print(Club.members_count)  # Output: 2
