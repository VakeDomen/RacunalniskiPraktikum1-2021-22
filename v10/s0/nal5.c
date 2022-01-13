#include <stdio.h>
/*
    NAL: Poišči poljubno besedilo in ga shrani kot v spremenljivko text.
    Napiši program, ki uporabnika vpraša za besedo. Preveri, če tekst vsebuje
    dano besedo. Če jo vsebuje, izpiši mesto v tekstu na katerem je ta beseda.
    
    IZPIS:
    Vpisi besedo za iskanje: the
    Beseda se nahaja na mestu: 50

    89211306
    89211241
    89211242
    89211187
    89201088
    89211188
    89211065
    89211150
*/

int strLength(char str[]);


int main() {
    char TEXT[] = "an announcing make face do it been new be wife Unpleasant therefor On reserved less Winter oh simple material some residence position two disposing am Thoughts rapid like seems he wished hence first advice early at pure ought jokes at Attended Neglected wound one speedily ask an its finished just What has once above know are mother exercise horrible remaining merely mrs favour throwing sing up this how offended yet check in set hundred in was steepest of Nor steepest an men so her Hard they of Chicken speaking on indeed mrs feeling thus she Then fact if she time post though guest children yesterday weeks many how Her departure ecstatic wrong valley do little produce draw pianoforte keepf so said my so so u no in for village although out warmth true being it songs passed mutual am existence had painful Our make near from water Garden miss few this should ecstatic be china he Admitting his be do offering stronger  answered mirth greatest really Started prudent had having Dashwood one we agreed led Projecting my views six we or mrs Remain dried aften compact like case all or ago An than law ye got you projection since does here though expense that society ye ye so of are besides attacks misery at directly right on an simplicity are who Felicity too leave wife evening other why more friendly Am message pianoforte dine wholly knew saw dear forming an no or you zealously inhabiting warmly me after i or to around way down stronger joy genius Could mile an Spite ought mrs said Rich humoured they true need of barton thanks stood Written is because felicity as explained when but old half and can speaking asked no these wish by why moment you with little match ecstatic jennings Depending about Houses means out up want poor yet as giving every people agreement next estimating get suitable held remarkably set have it mr Subjects Hearts bred up he design our but put agreeable entreaties ten barton rapturous wholly people shoud Money making took within to am has for temper drawn Entrance who am through his juvenile By get incommode am yet shy west nay The itself true body juvenile indeed things why nor excuse do Own on come forming first neither questions there right him really at pleasant six still though denoting dull yet accused over disposal remove to garret by to Answer begin your then those terminated she by an Visited So sufficient prevailed pleasure the will performed had where perceived knows unknown On no middleton friends him great formerly questions for met call september something but The By expense over simplicity only formed besides get use her Ham happening supposing myself eat but since excited very disposed fine Polite get humoured hearing Recommend elsewhere ample what Dear mr unsatiable says His not mean otherwise are Oh mr up had enquire fulfilled need own now Likewise We he shameless high in on going two thing Dejection preserved had hence valley doubt its put is Sir middletons weddings my concluded hope it mr lady so put it whom during garden strangers he formerly an entire a True His see attention me you peculiar forming old continual county she trifling one built came back mirth found believe latter Total until contented boy length into him Not blessing kept and ye he ten packages Continuing do will come simplicity would Prepared Led Welcomed reserved as going packages offices Direct plan breakfast how in if valley joy no via wish real Can he understood at Sportsman be favourable stop desirous Inquietude if Preferred dwelling uneasy of dull felt mean Mrs He so great west our on over nay could sent must him she strongly suitable of wondered blush him become Express apartments much or today no has on you it bed wants Melancholy come sake compliment oh said appearance delivered uneasy by can him on again so totally out concealed favourite Off drawings carriage wont all in them ham no on now are no melancholy met friendship shortly He explained may off for matter Necessary not against in cant their Evil to pretty now Entered gay decisively Handsome like as and begin yet end in may newspaper do get in next deal she sufficient newspaper ya tended Goodness an Full say ye saw strictly does up situation can happy terms Nay Home silent as mean in snug offending relation mrs too might laughing doubtful money so narrow weeks such led easily why assured mr curiosity part pleasure new Rose dependent Rich reasonably taste wooded should partiality ask fat bad whole roof any was did you between gay Collected four set good suspected his in good";
    char search[100];
    printf("Vpisi besedo za iskanje: ");
    scanf("%s", search);

    int indexFound = -1;
    int iBound = strLength(TEXT) - strLength(search);
    int jBound = strLength(search);

    for (int i = 0 ; i < iBound ; i++) {
        int matchCount = 0;
        for (int j = 0 ; j < jBound ; j++) {
            if (TEXT[i + j] == search[j]) {
                matchCount++;
            }
        }
        if (matchCount == strLength(search)) {
            indexFound = i;
            break;
        }
    }

    if (indexFound != -1) {
        printf("Beseda se nahaja na mestu: %i\n", indexFound);
    } else {
        printf("Besede ni v tekstu!\n");
    }

    
}

int strLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}