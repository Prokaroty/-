#pragma warning (disable: 4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define OP "options"
void pause()
{
    int b;
    b = 0;
    getchar();
    while (b < 300000)
        //延时
    {
        b++;
        printf("");
    }
}
//                               特殊道具，古代银币
int main()
//  等级     钱币  延时符  选择1   选择2   钱币原数量缓存  攻击力  防御力
{
    int  b = 0, level = 1, coins = 100, d = 0, choice, aw, points = 0, choich, quiz, fruits = 0, HP = 100, companion,trust, temp = 1, asc=0, attack, defend, map=0;
    int  i = 0, j = 0, k = 0, choicec, choiced, choicee, choicef, choiceg, choice1, choice2, choice3, choice4, choice5, choice6, choice7, choice8, choice9, choice10;
    char ch, c;
    //初始界面设置
    printf("    ∧__∧::\n   (′'ω'`)::\n  / 　　  )::\n /へ_＿  / /::\n(＿＼＼  ?)/::\n　 ｜ `-イ::\n　 /ｙ　 )::   Enter 'new' to start anew\n　/／  ／::    Enter 'load' to reload your file\n／　／::       Enter 'option' to set the game\n(　く:::\n|＼ ヽ:::\n\n\n\n");
    printf("独自制作不易，最好按提示来，不然就算有防呆机制也可能产生bug\n");
    scanf("%c\n", &ch);
    //扫描输入
    while (ch != 'n' && ch != 'l' && ch != 'o')
        //选择‘新游戏‘、’存档’、‘设置’
    {
        printf("\nFailed!\n Please enter again.\n");
        ch = getchar();
    }
    //友好？的交互
    switch (ch)
    {
    case 'n':
        //开始新游戏
        printf("\nThis is a new game...\n");
        pause();
        printf("First,choose your occupation\n");
        pause();
        printf("现阶段开发不完全请输入小写字母b\n");
        //选择职业
        pause();
        printf("       Berserker\n       Saber\n       Wizard\n");
        printf("Enter the first character to choose.\n");
        fflush(stdin);
        scanf("%c", &c);
        while (c != 'b' && c != 's' && c != 'w')
        {
            printf("Failed!\n Please enter correctly.\nIf the program is running successfully,forget this :)");
            c = getchar();
        }
        switch (c)
            //职业选择判断语句
        {
        case 'b':
            i = 1;//数组1号
            //选择berserker和角色简介
            printf("\n\n\n\n               Profession--Berserker\nYou are stronger in strengh than anyother else with a slow movement.\n");
            attack = 100;
            defend = 80;
            printf("Attack=%d,Defend=%d", attack, defend);
            pause();
            while (d < 18)
                //清屏
            {
                d++;
                printf("\n ");
            }
            printf("\n          your game has started\n");
            //选职与开始模块
            printf("                  (Press 'Enter' to continue)");
            pause();
            //!!!!!!!!!!!!!!!!
            //下方背景介绍
            /*
            章节1情节1
            */
            printf("\nYou wake up finding this is a cave,with only 100 \ncoins by your side\n");
            pause();
            //章节1情节2
            printf("\nAfter your quick analyze,you tries to get out\n");
            pause();
            //章节1情节3
            printf("\nYou find youself deep in a forest,there seems to be a village ahead.However,there is a pigbrin nearby.");
            pause();
            printf("\n\n              You choose to\n 1.slid away               2.fight with it\n\n");
            /*
            章节1剧情分支
            */
            scanf("%d", &choice);
            //做出选择
            while (choice != 1 && choice != 2)
            {
                printf("No other choices offered!!!\n\n");
                //友好？的用户交互
                getchar();
                scanf("%d", &choice);
            }
            while (temp < 20)
            {
                temp++;
                printf("\n");
            }
            switch (choice)
                /*
                章节1分支a
                */
            {
            case 1:printf("you are noticed and flee away as fast as you can.\n\n");
                //选择逃跑
                pause();
                printf("　∧＿∧ =- \n（′'ω'`) =-　\n　と′_,ノヾ =- \n　　(′ ヽ、＼ =- \n　　｀―'　＼_） =- \n");
                b = 0;
                getchar();
                pause();
                printf("\n\n\n\ntired as you are,you are noticed by a villager accidentally\n\nHe invited you to shelter in his cottage.\n ");
                pause();
                printf("\nYou have a chat with him and know about the story of this village.\n\n");
                pause();
                printf("V:'The village has been occupied by mobs as long as I could remember\n\n");
                pause();
                printf("'and this story was told by my grandparents'\n\n");
                pause();
                printf("'THE DEVIL enchanted our guards and intruded into the King's Castle.'\n\n");
                pause();
                printf("As a consequence, the warrior of our village were enlisted to recaptur the captical.'\n\n");
                pause();
                printf("'Some one said he is killed.\nBut my grandpa wrote down a serect,\n\nwhich,he had never spread out a single word.\n'");
                pause();
                printf("'The story written in his book tells a story about how he saved the hero'\n");
                pause();
                printf("'The hero was found lying on the ground,hurt all over heavily'\n");
                pause();
                printf("\nHe tried to use the herb he collected to cure him\n\nAnd it did seem to work well.");
                pause();
                printf("However,after the hero awoke\nHe refused to say about what happened to him on the campaign\n\n");
                pause();
                printf("'Instead, he insisted that my grandpa accept this ancient coin.'\n");
                pause();
                printf("'Someone might need this,keep it,in case it matters'He said\n");
                pause();
                printf("'That's the story'\n\n'I suppose you might need it' \n'you need to have a better cloth if you wanna to survive here'\n");
                pause();
                printf("\n\nYou get a special item:    'ancient silver coin'\n\n");
                asc = 1;
                printf("\nHaving thanked the villager,you headed to the town.");
                break;
                /*
                章节1情节b
                */
            case 2:
                printf("　∧_∧\n（ 'ω')=つ≡つ\n（っ ≡つ=つ\n`/　　)\n(ノΠＵ\n");
                printf("\n\n\n\nyou fight with the pigbrin courageously\n\nIt's really dangerous for an unarmed man like you to fight with a mob\n\nSomehow you managed to kill it.");
                temp = coins;
                HP = HP - 80;
                level = level + 7;
                coins = coins + 20;
                pause();
                printf("\n\nyour HP drops to %d, level rises to %d ,gain %d coins.", HP, level, coins - temp);
                pause();
                printf("\n\nExhausted and out of breath,you lies on the ground,falling asleep...");
                pause();
                printf("\nYou wake up in a shabby clinic\n\nThere is no one around the room\n\nYou desided to get out.\n");
                break;
            }
            pause();
            printf("You enter the main street of the town\n\n");
            pause();
            //章节2场景1
            printf("There seems to be an Armor Shop ahead.\n\nYou entered the shop.\n");
            //购物+情报
            pause();
            printf("\n                You chooce to\n");
            printf("    1.ask about other things\n    2.ask for an alloyed katana\n    3.ask for a pair of armor\n");
            //选择想要的
            scanf("%d", &choich);
            //做出选择
            while (choich != 1 && choich != 2 && choich != 3)
            {
                printf("No other choices offered!!!\n\n");
                //友好？的用户交互
                getchar();
                scanf("%d", &choich);
            }
            switch (choich)
            {
                //switch的前括号
            case 1:
                //367-464命令行
                if (asc == 1)
                    //如果你有古老银币，可以选择卖掉 ，（但会失去重要道具）
                {
                    coins = coins + 300;
                    printf("You ask about the ancient silver coin\n\n");
                    pause();
                    printf("The seller find some amazing spell on the coin\nHe took the spell down and give 300 coins to reserve the coin.");
                    pause();
                    printf("\n\n   You now have %d coins\n\n", coins);
                }
                else
                    //没有古代银币，进入与商人对话
                {
                    //支线任务背景，获取特殊道具
                    printf("The seller complained about the segregate of the mobs,which block the goods of the Barren Desert\n\n");
                    pause();
                    printf("'What do you want from there?'You ask\n");
                    pause();
                    printf("'The Dreary Fruit' He replies, 'An ingredient important for potion'\n\n");
                    pause();
                    printf("'I also have some potion business, you know'");
                    pause();
                    printf("'Look at this'He hands over a map\n\n");
                    //开启新任务
                    pause();
                    printf("'Could you do me a favour to get some ingredients,Mr.Hero?\n\nTake this potion with you in case you need cure'He said\n");
                    pause();
                    printf("'Let me keep this'You said,taking over the map\n");
                    map = 1;
                    //获得道具：荒野地图
                    HP = 200;
                    //为了以后不用磕药先加上了：）
                }
                //else的后括号
                pause();
                printf("'Want to buy something before you leave?'Said the seller.");
                //继续购物
                printf("\n    1.get an alloyed katana\n    2.get a pair of armor\n    3.'There's no need'");
                scanf("%d", &choicec);
                switch (choicec)
                {
                case 1:
                    coins = coins - 80;
                    attack = attack + 30;
                    printf("You get an alloyed katana.\n\n Attack+30;");
                    printf("\n\n   You now have %d coins", coins);
                    pause();
                    break;
                    //case 1-1
                case 2:
                    coins = coins - 120;
                    attack = attack + 20;
                    defend = defend + 50;
                    printf("You get a pair of Armor.\n\n Attack+20;Defend+50\n\nNow you have %d coins", coins);
                    pause();
                    break;
                    //case 1-2
                }
                break;
                //case 1 的break（total）
            case 2:
                //case 2 买太刀
                coins = coins - 80;
                attack = attack + 30;
                printf("You get an alloyed katana.\n\n Attack+30;");
                printf("\n\n   You now have %d coins", coins);
                pause();
                break;
                //case 的break
            case 3:
                //case 3 买套装
                //若想买套装
                /*
                1.如果击杀了猪布林有了120coins,可以购买一套盔甲
                */
                if (coins >= 120)
                {
                    attack = attack + 20;
                    defend = defend + 50;
                    printf("You get a pair of Armor.\n\n Attack+20;Defend+50\n\nNow you have %d coins", coins - 120);
                    coins = coins - 120;
                }
                //2.如果没有120coins则无法购买
                else
                {
                    //else的前括号
                    printf("\nSorry,you are lack of money!\n");
                    pause();
                    choiced = 0;
                    //钱不够买一套，换成买太刀或者离开.
                    printf("'Want to buy something else?'Said the seller.\n\n");
                    printf("    1.get an alloyed katana\n    2.'There's no need'\n");
                    scanf("%d", &choiced);
                    switch (choiced)
                    {
                        //switch
                    case 1:
                        coins = coins - 80;
                        printf("You get an alloyed katana.\n\n Attack+30;");
                        printf("\n\n   You now have %d coins", coins);
                        break;
                        //case 3-1
                    case 2:
                        printf("'No, thanks.'you reply.");
                        break;
                        //case  3-2
                    }
                    //switch
                    pause();
                    break;
                    //case 3-not-enough 的 break
                }
                //else的后括号
            }
            //switch的后括号（total）
            pause();
            d = 0;
            while (d < 23)
                //清屏
            {
                d++;
                printf("\n ");
            }
            printf("You left the Armor Shop\n");
            pause();
            //章节3 支线1
            if (map == 1)
                //如果刚才获得了地图
                /*
                下面都是if的部分！！
                */
            {
                //if的前括号
                printf("Holding the map, You desided to have a rough detection of the desert\n");
                pause();
                printf("On your way to the desert\n\nyou suddenly experience an electrical shock");
                pause();
                printf("You pull away the withered grass,and find an animal lying there\n\n\n\n");
                pause();
                printf("pikaへ　　　／|\n　　/＼  　 ∠/\n　 /│ 　　 ／／\n　│ Z ＿,＜／　  /ヽ\n　│　　 　ヽ　  /　〉\n　Y 　　 　`　  /　/\n  ｲ●　､ ●⊂⊃〈　|　/\n　()  へ　　|　＼〈\n　　>ｰ ､_ィ │   | | \n　 / へ　/　ﾉ＜| ＼＼\n　 ヽ_ﾉ (_／　 │／／\n　　7　　　　　|／\n　　＞―￣ｰ―＿6\n");
                pause();
                printf("\n                You chooce to\n");
                printf("    1.Try to chase it\n    2.Use the potion to heal it\n    3.ignore it and go on\n");
                scanf("%d", &choicee);
                //做出选择
                while (choicee != 1 && choicee != 2 && choicee != 3)
                {
                    //while 的括号
                    printf("No other choices offered!!!\n\n");
                    //友好？的用户交互
                    getchar();
                    scanf("%d", &choicee);
                }
                //while 的括号
                switch (choicee)
                {
                    //switch开始
                case 1:
                    printf("It reacts severely,trying to defend itself.\n");
                    pause();
                    printf("You keeps moving around it, not wanting to be attacked\n ");
                    pause();
                    if (defend > 100 && HP >= 100)
                        //能否收服宠物的条件判断defend>80且HP>100
                    {
                        //if的前括号
                        printf("You draft around it carefully\n\nFinally,it get tired and fainted.\n");
                        pause();
                        printf("After all this efforts,You carefully observe this little creature\n");
                        pause();
                        printf("It covers with bright-yellow fur,and seems that its leg was injuried");
                        pause();
                        printf("'It could be a helping hand if some emergency occurs'You think\n");
                        pause();
                        printf("Thus you use the healing potion to cure its leg\n");
                        pause();
                        printf("It suddenly opens its eyes, staring at you at quite a short distance\n   without any resistance.");
                        pause();
                        printf("it thinks that you are somehow kind to him.\n\n\n ");
                        printf("You are lucky to have a companion,which you name it 'pika'\n");
                        companion = 1;
                    }
                    //if的后括号
                    else
                    {
                        //else 的前括号
                        printf("You actually provoke it,which result in a Severe electric shock\n\n");
                        pause();
                        printf("It makes you fell rather paralysed.\n\nThus you flee away quickly.");
                    }
                    //else的后括号
                    break;
                    //case 1结束
                case 2:
                    printf("You carefully observe it,suddenly finding a long wound on its left leg\n\n");
                    pause();
                    printf("You use the healing potion to cure its injuried leg.");
                    pause();
                    printf("You find it rather alert to strangers, and the moment you tries to lift it up.\n\nA strong sence of paralysis makes you hard to move.");
                    pause();
                    printf("That's when it escape your hands,and vanished amid the withered grass.\n");
                    HP = HP - 80;
                    //用掉了一瓶恢复药水
                    pause();
                    printf("You had to move on to get the ingredience, feeling quite annoyed.");
                    break;
                    //case 2结束
                case 3:
                    printf("Feeling that it's best not to provoke it\n\n");
                    pause();
                    printf("You bypass it and move on to get the ingredients...\n\n");
                    break;
                }
                //case3结束
                pause();
                printf("After you meet the mob,you keep going deeper into the desert.\n\n");
                pause();
                printf("Thanks to the detailed map\nYou manage to find the desert.\n");
                pause();
                printf("However,there's mobs around,seemmingly protecting the fruits.\n");
                pause();
                printf("\n                You chooce to\n");
                printf("    1.Defeat them all\n    2.attract them to leave\n    3.Try to find other fruite resource\n");
                scanf("%d", &choice1);
                //做出选择
                while (choice1 != 1 && choice1 != 2 && choice1 != 3)
                {
                    //while 的括号
                    printf("No other choices offered!!!\n\n");
                    //友好？的用户交互
                    getchar();
                    scanf("%d", &choicee);
                }
                switch (choice1)
                {
                    //switch 开始
                case 1:
                    if (defend > 100 && attack >= 100)
                    {
                        //if开始.
                        printf("Though they are large in number\nActually you find them quite weak\nMaybe you could attribute your success to your armor.");
                        pause();
                        printf("You successfully get enough ingredients needed for potion\nBefore the next troop come,you find it better to leave soon.\n");
                        fruits = 1;
                    }
                    //if结束
                    else
                    {
                        //else 开始
                        printf("They are large in number,which makes you hard to kill them all\n");
                        pause();
                        printf("You had to flee to avoid being killed\n");
                        fruits = 0;
                        printf("You feel quite annoyed not to get the ingrediemce.");
                    }
                    //else结束
                    break;
                    //case 1结束
                case 2:
                    printf("You try to make a load noice to get the mobs attracted away\n");
                    pause();
                    printf("Not all of them leave,but that's enough for you to fetch the fruit.\n");
                    pause();
                    printf("Before they return,you've got the ingredience and fled away\n");
                    break;
                    //case2结束
                case 3:
                    printf("You try to find ; possible sources\n\nSadly, everywhere is guarded by mobs.");
                    pause();
                    printf("Thirsty and tired,you find a cool place to have a rest.\n");
                    pause();
                    printf("The moment you lean on the boulder blocking out sunlight\nyou heard the sound of a trap activated\n");
                    pause();
                    printf("Without knowing what has happened,you fall into a cave.\nThe sunlight lights up one side of the cave\n");
                    pause();
                    printf("You struggle to get up\n only to find a quiz on the sand wall\n\n\n");
                    printf("     ln(sinx)-ln(arcsinx) \n Lim -------------------\n x→0        x*arctanx\n\n");
                    printf("    1. 0      2. -1/3      3. 1     4.Null\n\n");
                    printf("'Hero from the past,if you could get the right answer,\nThe Gate of Fate will opens for you'\n\n");
                    scanf("%d", &quiz);
                    switch (quiz)
                    {
                        //switch开始
                    case 2:
                        printf("'Seems like you are quite well in mathmatic\n ");
                        pause();
                        printf("Emmm...forget that,I will show you the gate.'You heard an old voice\n");
                        pause();
                        printf("The sand suddenly give off a dazzling flash\n");
                        pause();
                        printf("It's too hard for you to see what had happpened\n");
                        pause();
                        printf("You suffer a brief blindness...\n....................");
                        pause();
                        printf("When you recovery, you surprisely find yourself floating above the cloud\n");
                        pause();
                        printf("An old man is standing by your side.'You wake up'\n");
                        pause();
                        printf("'Why am I here ?'You are still at a loss\n");
                        pause();
                        printf("'Honor the will of God'He replied\n");
                        pause();
                        printf("'Follow me'\n");
                        pause();
                        printf("He flys forwrad,'You see the Quartz Arch ahead？'\n");
                        pause();
                        printf("'That's the Gate of Fate I mentioned before\nWhat a pure,towering and magnificent masterpiece!'\n");
                        pause();
                        printf("He looked back at you and said: 'Have you decided whether to pass? \n");
                        pause();
                        printf("Once making up your mind, there is no turning point.'\n");
                        pause();
                        printf("You make up your mind to pass the door\n");
                        pause();
                        printf("You nod to the old man, while adjusting to the air-walking experience\n");
                        pause();
                        printf("The distance isn't that far it seems to get there\n\nFew minutes later, you get there.\n");
                        pause();
                        printf("There is an intangible wall ahead of you, dividing this space into two parts\n");
                        pause();
                        printf("Only can you get 4 correct answer will the door opens for you\nOtherwise, you'll be sent back\n");
                        pause();
                        printf("Question1:        lnax \n Lim { ln(xlna)ln-------- }\n x→0             lnx-lna \n\n 1. lna     2. ln2a    3. 1    4.2lna\n\n\n");
                        scanf("%d", &choice2);
                        if (choice2 == 4)
                        {
                            printf("Question2:\n:    sin2x \n Lim-------- \n x→0 sin3x  \n\n  1. 0    2. 1    3. π    4. 1/π\n\n\n");
                            scanf("%d", &choice3);
                            if (choice3 == 2)
                            {
                                printf("Question3:设曲面E:z^2 = x^2 + y^2 ,1≤z≤2,其面密度为常数p，求原点处质量为1的质点和E曲面之间的引力（引力常数为G）\n\n 1. 1/2Gpπln3    2. Gpπln2    3. 1\3Gpπln2    4. Gpπln3\n\n\n");
                                scanf("%d", &choice4);
                                if (choice4 == 2)
                                {
                                    printf("Question4:求二重积分I = ff|x^2+y^2-x-y|dxdy\n           x^2+y^2≤1\n\n  1. 1+π/4    2. 1+π/8    3. 1+3π/8    4.π/4\n\n\n");
                                    scanf("%d", &choice5);
                                    if (choice5 == 3)
                                    {
                                        printf("You are brilliant!!\nI did't guess someone would pass the course!!\n ");
                                        pause();
                                        printf("As you finish all the quiz,The arch of fate opens for you...\n\n");
                                        pause();
                                        printf("You fail to remember what has happened.\n\n");
                                        pause();
                                        printf("An upper world is waving to you....\n\n......\n\n......\n\n......");
                                        pause();
                                        printf("The game ended, you achieve 'Brilliant Mind'\n");
                                        break;
                                    }
                                }
                            }
                        }
                        else {
                            printf("You fail the quiz\n");
                            pause();
                            printf("'You failed, I said I have to send you back accoring to the God'The old man says.\n");
                            printf("You are sent back to the ground,with a bag of fruits you want by your side\n");
                            fruits = 1;
                            break;
                        }
                        //这里还有剧情没写！！！
                    default:
                        printf("'no no no,you get a wrong answear.I have to postpone this plan now\n\n emm...yes,this is a gift,hope we can meet next time'An old voice said.\n");
                        pause();
                        printf("You are sent back to the ground,with a bag of fruits you want by your side\n");
                        fruits = 1;
                        break;
                    }
                    //quiz结束
                    break;
                    //case3结束
                }
                //switch 结束
            }
            //有map情况结束
            else if (asc == 1)
            {
                //else if 开始
                trust = 10;//信任值初始化
                printf("You suddenly remember the ancient silver coin\n");
                pause();
                printf("There seems to be some spell on the front\n\n");
                pause();
                printf("By the night of the sunset,an outline of arrow appears on the back.\n");
                pause();
                printf("The arrow's direction changes while you moves\n");
                pause();
                printf("You thought this coin might lead you to somewhere important.\n");
                pause();
                printf("You follow the arrow into the field,\nThe sun is about to set,and the arrow disappears time to time.\n");
                pause();
                printf("You guess that only the dusk light activates the arrow\n");
                pause();
                printf("Taking a look around,you find the arrow is leading you right to the mountains\n");
                pause();
                printf("\n         you decide to:\n    1.enter the mountains under the moon-light\n    2.set up a camp-fire, and wait for the next day.\n\n");
                scanf("%d", &choicef);
                //做出选择
                while (choicef != 1 && choicef != 2)
                {
                    //while 的括号
                    printf("No other choices offered!!!\n\n");
                    //友好？的用户交互
                    getchar();
                    scanf("%d", &choicef);
                }
                //while 的括号
                switch (choicef)
                {
                case 2:
                    printf("You set up a camp-fire, and collect some fruits to eat.\n");
                    pause();
                    printf("As the sunlight shades, the air gets colder and colder\n");
                    pause();
                    printf("You are napping on the grass, when suddenly some rustling sound catch your attention\n");
                    pause();
                    printf("Alerting fears suddenly fill up your heart\n");
                    pause();
                    printf("You look far to the direction of the town");
                    pause();
                    printf("mobs seem to emerge suddenly at the rage of your sight");
                    pause();
                    printf("After a days travel, you know that you can't escape them easilily ");
                    pause();
                    printf("You have to avoid the large crowd while withdraw deep into the forests");
                    pause();
                    trust = trust + 5;
                case 1:
                    printf("The minute you enter the forest,the dense leaves shade the dusk light\n\nMaking the arrow disappear. ");
                    pause();
                    printf("To make things worse,the trees seem to be vanished in the thick fog\n");
                    pause();
                    printf("As the sun set, everything include yourself are buried into the darkness\nn");
                    pause();
                    printf("Cold,fear,loniness totally flood you\n");
                    pause();
                    printf("Suddenly,A gleam of light appeared in the darkness\nguiding you towards it...\n");
                    pause();
                    printf("You seem to catch the last straw,running towards it desperitely......\n");
                    pause();
                    printf("At the end of the light, there stands a tree house.The small windows on the trunk is giveing out light\n");
                    pause();
                    printf("'Who's out here ?'A clear voice yells\n");
                    pause();
                    printf("As the door opens,an elf is standing against the frame.\n\n'Why are you here!?your time has ended!!!'She yells at a shock\n");
                    printf("\n\n\n\n   ∧＿∧\n （｡･ω･｡)つ━☆\n ⊂　　 ノ\n　しーＪ\n\n\n\n");
                    pause();
                    printf("You are still at a loss,not knowing what has happened\n");
                    pause();
                    printf("'Calm down,my poor girl.I guess both the man outside and you are quite confused.\n\nThe wind is cold outside,enter to have a warm tea please.'Said an old voice\n");
                    pause();
                    printf("You fellow the elf into the house.\n\nThe light of fireflies illuminates the small room,making it seems quite warm inside.\n\n");
                    pause();
                    printf("'Seems that something ties our destiny together right?'\n\n");
                    pause();
                    printf("'Would you mind telling me something about you?'\n\n");
                    pause();
                    break;
                }
                    printf("    You'd like to say:\n    1.I wake up at a cave...\n    2.I fellow the coin here...\n    3.What's the destiny you just said?\n");
                    
                    scanf("%d", &choiceg);
                    while (choiceg != 1 && choiceg != 2 && choiceg != 3)
                    {
                        printf("No other choices available.\n");
                        getchar();
                        scanf("%d", choiceg);
                    }
                    switch (choiceg)
                    {
                        //switch开始
                    case 1:
                        pause();
                        printf("I woke up at a cave without anything\n\n");
                        pause();
                        printf("After meeting a mob, I tried to escape it and was saved by a villager\n\n");
                        pause();
                        printf("He gave me this ancient coin \n\n");
                        pause();
                        printf("When lit, there is an arrow on the surface of the coin\n\n");
                        pause();
                        printf("And I fellow the arrow here.\n\n");
                        pause();
                        printf("'Seems like you have a troublesome experience'The old elf said\n\n");
                        pause();
                        printf("'However, things began to go wrong'\n\n");
                        pause();
                        printf("As you see, there began to have annoying fog since you were awake\n\n");
                        pause();
                        printf("'Maybe the arrow is leading you to a place where we can solve this problem'\n\n");
                        pause();
                        printf("'Have a sound sleep now, I'll go with you tomorrow'\n\n");
                        pause();
                        printf("After a whole day's hking, you fall asleep in one guest-room quickly......\n\n");
                        pause();
                        printf("sleeping...\n\n");
                        pause();
                        printf("sleeping...\n\n");
                        pause();
                        break;
                        //case1结束
                    case 2:
                        printf("'I was from the village, coming here to see what this coin used for.'\n\n");
                        pause();
                        printf("'The fog blocked my way, but I manage to get here'\n\n");
                        pause();
                        printf("'This coin leads me near here, when the little elf find me'\n\n");
                        pause();
                        printf("You handed her the coin, 'do you know something about it?'\n\n");
                        pause();
                        printf("'I mean, anything relevant can be ok, I begin my study of it early this day'\n\n");
                        pause();
                        printf("'You know that it's not easy for me to do this kind of work'\n\n");
                        pause();
                        printf("Nymph observes the coin carefully, finally she says,'That must be masterpiece of my ancestor'\n\n");
                        pause();
                        printf("'It's said that a hero with this would bring the facts out of mist.'\n\n");
                        pause();
                        printf("'You must count for it, do you mind us do some reserch together this night?'\n\n\n");
                        pause();
                        printf("You choose to say:\n  1.Sorry, but I'm totally exhausted now\n  2.That's fine, may this helps you");
                        scanf("%d", &choice7);
                        //做出选择
                        while (choice7 != 1 && choice7 != 2)
                        {
                            //while 的括号
                            printf("No other choices offered!!!\n\n");
                            //友好？的用户交互
                            getchar();
                            scanf("%d", &choice7);
                        }
                        //while 的括号
                        switch (choice7)
                        {
                        case 1:
                            printf("'Sorry to bother, but I'm as tired as a dog after a day's traveling'\n\n");
                            pause();
                            printf("'Tomorrow might be ok'\n\n");
                            pause();
                            printf("'Oh, I forget that, my little girl will lead your way, go for a rest now'\n\n");
                            pause();
                            printf("'There's seems much to do tomorrow'\n\n");
                            pause();
                            trust = trust - 2;
                            break;
                        case 2:
                            printf("'Fine, tell me about the legend if possible'\n\n");
                            pause();
                            printf("You follws Nymph into a library, in the center of which lies an ole wooden table.\n\n");
                            pause();
                            printf("'Hmm, let me find the book...'\n\n");
                            pause();
                            printf("'It should be here.. my poor girl, did you hide the Legend Scroll somewhere?'\n\n");
                            pause();
                            printf("'I don't think I know where you hides it', The little elf answers from the living room.\n\n");
                            pause();
                            printf("'Let focus on the coin now, there's enough story now.'\n\n");
                            pause();
                            printf("'Humm, let start with this......'\n\n");
                            pause();
                            printf("Although tired, you do see some similar graphs on the book.\n\n");
                            pause();
                            printf("The smell of the room makes you much distracted and can't focus your attention\n\n");
                            pause();
                            printf("A night has passed before you even know about it\n\n");
                            pause();
                            printf("The moment you wake up, you find yourself on the bed, with  the little elf besides\n\n");
                            pause();
                            printf("'Mom told me to take care of you, or you would have a sound sleep in the library'\n\n");
                            trust = trust + 5;
                            pause();
                            break;
                            //case的break
                        }
                    case 3:
                            printf("'You seem to know about my past,can you continue to tell me abou that?' You ask\n\n");
                            pause();
                            printf("'This would take long, are you completely unconcious of your past?' Nymph asks\n\n");
                            pause();
                            printf("You nodded your head, motioning her to continue\n\n");
                            pause();
                            printf("'Since you've lost your memory, I think that you would like to know the history of the world.\n\n'");
                            pause();
                            printf("'Long ago when the elves live along with humans to resist mobs'\n\n");
                            pause();
                            printf("'Before we launch the Lore War with mobs, our ancestors build up walls to defend the mobs, and left several tools to fight against them'\n\n");
                            pause();
                            printf("'This coin might be a key to the trasures\n\n'");
                            pause();
                            printf("'You are the hero selected. And I will do my best to support you'\n\n");
                            pause();
                            printf("Hearing the storys, You are buried deep in thought\n\n");
                            pause();
                            printf("You can tell that there's some message Nymph hides in the story\n\n");
                            pause();
                            printf("But you're too tired to asked and listen again.\n\n");
                            pause();
                            printf("'Please, I'm quite exhausted now, can I rest for a while' You interupte Nymph\n\n");
                            pause();
                            printf("'I should know that, let my little girl lead you way to have a good rest...'\n\n");
                            trust = trust + 10;
                            break;
                        }
                        //case的break
                        printf("The next day, the shining bright sunlight dispell the mist.\n");
                        pause();
                        printf("'Are you ready to go now?My poor girl fell ill last night'\n");
                        pause();
                        printf("'Would you mind go with me?'");
                        pause();
                        printf("'No, wish that we could reach there',You replied.");
                        pause();
                        printf("You get out of the tree-house, trying to activate the coin.");
                        pause();
                        printf("'It doesn't work as well as yesterday, right?'The old elf asked\n");
                        pause();
                        printf("'Anyway, what's your name? You konw there's nothing I could do to know your name' You asked\n");
                        pause();
                        printf("'You can call me Nymph,anyway, how can we activate it?'The old elf says.\n");
                        pause();
                        printf("'Emmm, I guess it's the dusk light that counts'You reply\n");
                        pause();
                        printf("'If it's that reason, how about we rest till the dusk?'\n");
                        pause();
                        printf("You can tell that Nymph is quite worry about the fog.\n");
                        pause();
                        printf("However, You two have to wait until dusk to activate the arrow...\n");
                        pause();
                        printf("A day passed finally...\n");
                        pause();
                        printf("The moment the dusk light go through the tress, the arrow glimmers for a second\n");
                        pause();
                        printf("'That's north.Nymph says'\n");
                        pause();
                        printf("The arrow keeps shining time to time as you two managed to move in the jungle \n");
                        pause();
                        printf("Finally, you two get up to the top of a cliff.\n");
                        pause();
                        printf("As the chilly wind blowing roughly, there's no fog nearby\n");
                        pause();
                        printf("You look far from the cliff, the villages in the distance, the dense forests nearby are clearly visible\n");
                        pause();
                        printf("'Where does it lead to？'Nymph asks\n");
                        pause();
                        printf("'It disappears the moment we arrived there'You reply\n");
                        pause();
                        printf("As you tries to check the coin, the back of it suddenly give out a dazzling flash\n");
                        pause();
                        printf("The light covers you completely...\n");
                        pause();
                        printf("After you recovered, you find yourself transported to a place alone.\n");
                        pause();
                        printf("'Nymph?'you call out her name aloud, unfortunately, every time there's no reply\n");
                        pause();
                        printf("'The elf is forbidden to go there'A solemn voice rang in your ears\n");
                        pause();
                        printf("'Who are you? Where am I here?'You asked at a tense\n");
                        pause();
                        printf("'I'm at the honor of the Gods, giving you a chance to meet my Honored Majesty'the voice continued\n");
                        pause();
                        printf("'This is your trail: escape the falling arrows. Just prove that you worth my help.'\n");
                        pause();
                        printf("You even didn't get a chance to ask about other suspicions\n");
                        pause();
                        printf("Before you realize what has happened\n");
                        pause();
                        printf("The arrows begin to fall from the sky\n");
                        pause();
                        printf("You manage to escape them....\n");
                        pause();
                    game1://goto语句处
                        clock_t start, end;
                        printf("**********little game starts**********");
                        printf("\nenter the number where you can survive the arrows\n");
                        printf("\n请在看到箭头后迅速输入没有箭头的列数，立刻按’Enter’进行下一轮。时间和分数都合格者胜出\n\n");
                        getchar();
                        start = time(NULL);
                        printf("1     2     3     4     5     6     7    \n");
                        pause();
                        printf("↓           ↓     ↓     ↓           ↓\n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 6) points++;
                        pause();
                        printf("      ↓           ↓     ↓           ↓\n");
                        scanf("%d", &aw);
                        if (aw == 1 || aw == 3 || aw == 6) points++;
                        pause();
                        printf("↓           ↓     ↓           ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 5) points++;
                        pause();
                        printf("↓           ↓           ↓     ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 4) points++;
                        pause();
                        printf("      ↓     ↓           ↓     ↓      \n");
                        scanf("%d", &aw);
                        if (aw == 1 || aw == 4 || aw == 7) points++;
                        pause();
                        printf("↓     ↓     ↓     ↓     ↓           ↓\n");
                        scanf("%d", &aw);
                        if (aw == 6) points++;
                        pause();
                        printf("      ↓     ↓     ↓           ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 1 || aw == 5) points++;
                        pause();
                        printf("↓     ↓                 ↓     ↓      \n");
                        scanf("%d", &aw);
                        if (aw == 3 || aw == 4 || aw == 7) points++;
                        pause();
                        printf("↓     ↓           ↓           ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 3 || aw == 5) points++;
                        pause();
                        printf("↓           ↓     ↓           ↓      \n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 7 || aw == 5) points++;
                        pause();
                        printf("      ↓     ↓     ↓     ↓     ↓      \n");
                        scanf("%d", &aw);
                        if (aw == 1 || aw == 7) points++;
                        pause();
                        printf("↓     ↓           ↓     ↓     ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 3) points++;
                        pause();
                        printf("      ↓                 ↓           ↓\n");
                        scanf("%d", &aw);
                        if (aw == 1 || aw == 3 || aw == 4 || aw == 6) points++;
                        pause();
                        printf("↓           ↓                 ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 4 || aw == 5) points++;
                        pause();
                        printf("↓           ↓     ↓     ↓            \n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 6 || aw == 7) points++;
                        pause();
                        printf("            ↓           ↓     ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 1 || aw == 4) points++;
                        pause();
                        printf("↓           ↓     ↓     ↓           ↓\n");
                        scanf("%d", &aw);
                        if (aw == 2 || aw == 6) points++;
                        pause();
                        printf("      ↓     ↓           ↓     ↓      \n");
                        scanf("%d", &aw);
                        if (aw == 1 || aw == 4 || aw == 7) points++;
                        pause();
                        printf("↓     ↓           ↓     ↓     ↓     ↓\n");
                        scanf("%d", &aw);
                        if (aw == 3) points++;
                        end = time(NULL);
                        printf("You escape %d arrows", points);
                        printf("You use %.1f seconds", difftime(end, start));
                        if (points > 15 && difftime(end, start) < 28)
                        {
                            printf("congratulations!!\n\nYou win");
                            pause();
                            printf("\nAfter escaping the arrows, you are too exhausted to feel your legs");
                            pause();
                            printf("\n'Seems that you are quite swift, right?' the voice appears again");
                            pause();
                            printf("'Fellow me'\n\nYou try to stand up, but within a second, you find yourself flying towards the voice\n\n");
                            pause();
                            printf("'Where are we going to?' you asked\n\n");
                            pause();
                            printf("'To The Grand Palace Of Setekh'you finally discovered where the voice came from,\n a crow-like creature with a long, curved, pointed snout\n\n");
                            pause();
                            printf("'Here we get it',the crow says, suddenly disappering with a noise of weird laugh\n\n");
                            pause();
                            printf("'A hero selected by him right? Interesting' Another voice appears\n\n");
                            pause();
                            printf("'So how do you think of your situation now?' the voice asked\n\n");
                            pause();
                            printf("You raise your head up, still astonished by the palace suddely erected behind you\nBut still not able to see the majesty up on the palace\n\n");
                            pause();
                            printf("'Answer me please'the voice asks again 'about your situation'\n\n");
                            pause();
                            printf("'I came here fellowing the compass on this coin, and Nymph, an elf came with me '\n\n");
                            pause();
                            printf("'But she disappear the moment I fell into this space'\n\n");
                            pause();
                            printf("'Why she didn't get here?' You asked\n\n");
                            pause();
                            printf("'Do you still think that little elf allied with you just for your so-called hero identity?' the voice teases\n\n");
                            pause();
                            printf("'You got yours, she took it away \n You must have forget all about these'\n\n");
                            pause();
                            printf("You are astonished to get this answear, but still find many things remind unexplained\n\n");
                            pause();
                            printf("'So you came to my palace compeletely unknown of your past ?'\n\n");
                            pause();
                            printf("After a long sigh, the voice continues\n\n");
                            pause();
                            printf("'Once in the ancient past, There is no hero at all'\n\n");
                            pause();
                            printf("'But the Nether Dimension intruded through a gate at the end of the world'\n\n");
                            pause();
                            printf("'Even the weak Pigrins for example, are stronger than the native creature here.'\n\n");
                            pause();
                            printf("'And you, a toy abandonded ,are forced to wake up again and again to stop this disaster\n\n '");
                            pause();
                            printf("'You won't be the last one to rolled in, so do I'\n\n");
                            pause();
                            printf("'Hero? Just a chess to entertain them.'\n\n");
                            pause();
                            printf("'Everything were chesses for fun....'\n\n");
                            pause();
                            printf("You heard the voice from a whisper to roar, and suddenly end up with a sigh.\n\n");
                            pause();
                            trust = trust - 5;

                        }
                        else
                        {
                            printf("You fail the little game\n\nTry again if you want");
                            pause();
                            printf("You want to:\n  1.Try again     2.Go ahead");
                            scanf("%d", &choice6);
                            while (choice6 != 1 && choice6 != 2)
                            {
                                //while 的括号
                                printf("No other choices offered!!!\n\n");
                                //友好？的用户交互
                                getchar();
                                scanf("%d", &choice6);
                            }
                            if (choice6 == 1)
                            {
                                points = 0;
                                goto game1;
                            }//goto转到游戏
                        }
                        if (trust < 5)
                        {
                            printf("You just feel a strong wind blow you up to the sky\nSurronded by clouds, you get dazzlled easily.\n\n");
                            pause();
                            printf("The moment you wake up, you find Nymph searching around for something\n\n");
                            pause();
                            printf("She seems to be looking for you. Strangely, the shining sunlight make it hard to focus on her figure.\n\n");
                            pause();
                            printf("The moment you call out her name, your voice is stuck in your throat, just like someone strangles your neck\n\n");
                            pause();
                            printf("Suddenly, someone dressed up like you walked out of a Portal which also appears all of a sudden.");
                            pause();
                            printf("You see him walking closer to Nymph, which terrifies her completely\n\n");
                            pause();
                            printf("Then their conversation seems to change from chat to quarrel, but no sound comes out all the time\n\n");
                            pause();
                            printf("The fight immediately breaks out, but it doesn't take a long time before the man dressed like you is knocked down to unconscious.\n\n ");
                            pause();
                            printf("Nymph searchs in his cloth carefully...\n\n");
                            pause();
                            printf("Before long, she finds a wrist watch covered in the clouth\n\n ");
                            pause();
                            printf("You watch her walking farther and farther, till the figure vanished in the dense forests\n\n");
                            pause();
                        }
                        printf("After a familiar flash, you find yourself again at the edge of the hill.\n\n");
                        pause();
                        printf("Judging by the dusk light, you know that you didn't leave for a long time.\n\n");
                        pause();
                        printf("Nymph was ahead of you, just where she was before you get into that special dimension\n\n");
                        pause();
                        printf("You would like do\n  1.Yell to stop her\n  2.Check your belongings\n");
                        pause();
                        if (trust < 5)
                        {
                            printf("\n  3.Step up to subdue her\n");
                        }
                        scanf("%d", &choice8); 
                        //做出选择
                        while (((choice8 != 1) && (choice8 != 2)) &&((choice8 != 3)||(trust > 5 )))
                        {
                            printf("No other choices offered!!!\n\n");
                            //友好？的用户交互
                            getchar();
                            scanf("%d", &choice8);
                        }
                        
                        switch (choice8)

                        {

                        case 1:

                            printf("You wave and yell towards Nymph\n\n");

                            pause();

                            printf("'Anything wrong?'asks Nymph\n\n");

                            pause();

                            printf("You suddenly realize that your disappear might not interfere this world\n\n");

                            pause();

                            printf("'The stoped time, the reaction of Nymph all pointed out a surprising fact'\n\n");

                            pause();

                            printf("This is a Stand-in messenger called 'The world'!!!\n\n");

                            pause();

                            printf("'俺は人间をやめるぞ! ジョジョ──ッ!!'\n\n");

                            pause();

                            printf("(ps:This is an 'easter egg' made by the author when he was sick in mind)\n\n");

                            pause();

                            if (trust >= 15)

                            {

                                printf("'I was brought into a strange dimension just now'\n\n");

                                pause();

                                printf("'There were traps, crows there, and even a grand palace among the mists'\n\n");

                                pause();

                                printf("'They didn't bring you here, right?' You asked\n\n");

                                pause();

                                printf("'I didn't realise you have left yet, but how you get out of there?' Nymph asked\n\n");

                                pause();

                                printf("'After talk with the majesty, I suppose he sends me back'\n\n");

                                pause();

                                printf("'Interesting, but what do you get from him? Did the majesty tell you something important?'\n\n");

                                pause();

                                printf("You suddenly realise this, and when you search through yourself\n\n");

                                pause();

                                printf("You find a golden wrist watch inside your pocket\n\n");

                                pause();

                                printf("'What's this watch used for?'\n\n");

                                pause();

                                printf("'Seems like a very special item. I remember that I once saw this clock on an ancient book.'\n\n");

                                pause();

                                printf("'Let's return now, the sun is about to set'Nymph suggests\n\n");

                                pause();

                            }

                            else

                            {

                                printf("'Nothing special, it's getting dark outside. I don't think we should stay outside there'\n\n");

                                pause();

                                printf("'Maybe tomorrow we can come here ealier'\n\n");

                                pause();

                                printf("Nymph thinks for a while, then admit that it's dangerous to stay in the darkness\n\n");

                                pause();

                                printf("'Ok, let return quickly, there's so much reminds to do'\n\n");

                                pause();

                                printf("");

                                pause();
                            }

                            printf("After the sunset, the temperature drops quickly, and mists begin to warp you two up\n\n");

                            pause();

                            printf("");

                            pause();

                            printf("");

                            pause();

                            printf("");

                            pause();

                            printf("");

                            pause();

                            printf("");

                            pause();

                            printf("");

                            pause();
                            break;

                        }
                        case 2:
                        {




                            break;
                        }

                        case 3:
                        {




                            break;
                        }
                        pause();
                        printf("下次更新");
                        pause();
                        printf("");
                        pause();
                        printf("");
                        pause();
               
            }
            //else if的后括号
            else
            {
                printf("You decide to return to the clinic to see who saved you.\n");
                pause();
                printf("You find the way back,and knock the door of the clinic\n");
                pause();
                printf("A nurse answers your knock and opens the door.\n");
                pause();
                printf("'You are the one picked up by the village chief\n '");
                pause();
                printf("'I was worrying about you since you left,\n you know, you should have rest for about a week\n'");
                pause();
                printf("'Come in please, if you have any problems\n'");
                pause();
                printf("You follow her into the clinic\n");
                pause();
                printf("'Your ability to respond is very strong.\n Even if you didn't take medicine in the morning, you may have recovered now.I guess.\n'");
                pause();
                printf("'Wait a moment',you said\n\nYou just said that I was pick up by the chief,\n\n");
                pause();
                printf("[Where did he find me? you know, were you at the spot?'you ask\n");
                pause();
                printf("'Sorry, I'm absent then, If you'd like to hear more detailed information, I can lead you to our chief.'\n");
                pause();
                printf("That's kind of you\n Are you free to take me there now\n");
                pause();
                printf("'Here,let me lead the way'The nurse replies\n");
                pause();
                printf("You follow the nurse into the end of the corridor\n");
                pause();
                printf("As the nurse opens the curtain,You see an old man processing the collected medicinal herbs.\n");
                pause();
                printf("Mr.chief, it's me, the man you saved yesterday wnat to talk with you.\n");
                pause();
                printf("怎么会玩到这个支线啊，回去重选，这大概是故事最少的线了:(");
            }
            break;
            //berserker的break
        case 's':
            i = 2;//数组二号
            printf("\n\n               Profession--Saber\nYou are swifter than others a lot,while your strengh is still appreciable.\n");
            printf("In Demo Vision, this part is not available \n要付费才有得玩齁\n");
            break;
        case 'w':
            i = 3;//数组三号
            printf("\n\n               Profession--Wizard\nYou can have yourself healed every second,with significant magic damage but weak strengh.\n");
            pause();
            printf("In Demo Vision, this part is not available \n要付费才有得玩齁\n");
            break;
        }
        //if的括号
        break;
    case 'l':
        printf("load your file...\n");
        pause();
        printf("Sorry,this part is under construction.");
        printf("In Demo Vision, this part is not available \n要付费才有得玩齁\n");
        break;
    case 'o':
        printf("Set options...\n");
        pause();
        printf("Sorry,this part is under construction.");
        printf("In Demo Vision, this part is not available \n要付费才有得玩齁\n");
        break;
    }
    printf("\nThe program has ended可以试试其他线路哦");
    return 0;
}
