import random

class Deck:
    def __init__(self):
        value = [
                'A', 
                '1', 
                '2', 
                '3', 
                '4', 
                '5', 
                '6', 
                '7', 
                '8', 
                '9', 
                '10', 
                'J', 
                'Q', 
                'K'
                ]
        suits = [
                'Clubs',
                'Diamonds',
                'Hearts',
                'Spades'
                ]
        self.deck = [Card(v, s) for v in value for s in suits]

#    def __init__(self, value, suit):
#        self.deck = [Card(v, s) for v in value for s in suit]
    
    def __repr__(self):
        return self.deck.__repr__()

    def __len__(self):
        return len(self.deck)

    def shuffleDeck(self):
        random.seed()
        tempDeck = self.deck
        self.deck = []
        while len(tempDeck) > 0:
            randCard = tempDeck[random.randint(0, len(tempDeck)-1)]
            self.deck.append(randCard)
            tempDeck.remove(randCard)
    
    def drawCard(self):
        return self.deck.pop()

class Card:
    def __init__(self, value, suit):
        self.value = value
        self.suit = suit 

    def __repr__(self):
        return self.value + " of " + self.suit
