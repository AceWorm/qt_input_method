#ifndef INPUT_METHOD_H
#define INPUT_METHOD_H


class InputMethod
{
public:
    /**
     * @brief hideKeyboard  隐藏输入法键盘
     * 当目标控件 forbidKeyboard 属性为真时 键盘自动隐藏
     * 可通过 targetObject->setProperty( "forbidKeyboard", true ); 来启用此功能
     */
    static void hideKeyboard();

    /**
     * @brief setKeyboardType  设备键盘为26全键盘或9宫格按键模式
     * @param isT9             当 isT9 为true时显示9宫格按键 为false时显示26全键盘
     */
    static void setKeyboardType( const bool isT9 = false );

    /**
     * @brief setKeyboardSize  设置键盘大小
     * @param width            宽
     * @param height           高
     */
    static void setKeyboardSize( const int width, const int height );

    /**
     * @brief setKeyboardPosition  手动指定键盘在屏幕上的位置(默认根据大小自动计算)
     * @param x                    x 坐标
     * @param y                    y 坐标
     */
    static void setKeyboardPosition( const int x, const int y );

    /**
     * @brief setKeyboardFontPointSize  设置键盘界面字体大小
     * @param size                      字体大小
     */
    static void setKeyboardFontPointSize( const int size = 10 );

    /**
     * @brief setKeyboardMaxChinesePerLine  设置中文状态下一行最多显示查找到的的汉字个数
     * @param count                         个数
     */
    static void setKeyboardMaxChinesePerLine( const int count = 11 );
};

#endif // INPUT_METHOD_H
