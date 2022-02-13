vector<string> Solution::reorderLogs(vector<string> &arr) {
    vector<string> answer;
    int i, j, k;

    vector<pair<string, string>> letters;
    vector<string> digits;

    for (auto &s : arr)
    {
        string identifier = "";
        i = 0;
        while (s[i] != '-')
        {
            identifier += s[i];
            i++;
        }
        i++;
        if (isdigit(s[i]))
        {
            digits.push_back(s);
        }
        else
        {
            letters.push_back({identifier, s.substr(i)});
        }
    }
    sort(letters.begin(), letters.end(), [](auto & a, auto & b) {
        if (a.second == b.second) {
            return a.first < b.first;
        } else {
            return a.second < b.second;
        }
    });

    for (auto &p : letters)
    {
        answer.push_back(p.first + "-" + p.second);
    }
    answer.insert(answer.end(), digits.begin(), digits.end());
    return answer;
}
