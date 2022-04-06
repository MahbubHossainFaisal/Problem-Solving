def tournamentWinner(competitions, results):
    currentBestTeam = 0
    scores = {currentBestTeam: 0}

    for idx, competition in enumerate(competitions):
        result = results[idx]
        homeTeam, awayTeam = competition

        winningTeam = homeTeam if result == 1 else awayTeam

        updateScore(winningTeam, 3, scores)

        if scores[winningTeam] > scores[currentBestTeam]:
            currentBestTeam = winningTeam
    return currentBestTeam


def updateScore(team, points, scores):
    if team not in scores:
        scores[team] = 0
    scores[team] += points


competitions = [["html","c#"],["c#","python"],["python","html"]]
results = [0,0,1]

winner = tournamentWinner(competitions,results)

print(winner)

