const char *syntax = {
    "HELP - DESCRIPTION OF ASCIITEX SYNTAX\n"
    "\n"
    "       \\frac{a}{b}\n"
    "       A fraction of a and b.\n"
    "\n"
    "       a^{b}\n"
    "       A superscript. One can also omit the braces. In this  case  the first\n"
    "       character following ^ will be superscripted.\n"
    "\n"
    "       a_{b}\n"
    "       A  subscript.  Works  just  like the superscript (well, not exactly of\n"
    "       course).\n"
    "\n"
    "       \\sqrt[n]{a}\n"
    "       A n-th root of a, the argument [n] is optional. Without it it  produces\n"
    "       the square root of a.\n"
    "\n"
    "       \\sum\n"
    "       Expands to a sigma\n"
    "\n"
    "       \\prod\n"
    "       Expands to the product mark (pi).\n"
    "\n"
    "       \\int\n"
    "       Expands to the integral mark.\n"
    "\n"
    "       \\oint\n"
    "       A closed path integral.\n"
    "\n"
    "       \\left( , \\right)\n"
    "       Expands to braces which adept to the height of their content. Available\n"
    "       left braces are: ([{| The correspondingright  braces  are:  )]}|  All\n"
    "       brace  types can be opened by \\left.  or closed by \\right.  , producing\n"
    "       a single right or left brace, respectively.\n"
    "\n"
    "       \\leadsto\n"
    "       Expands to an arrow (~>), May look ugly depending on your fonts.\n"
    "\n"
    "       \\to\n"
    "       Expands to an arrow (->).\n"
    "\n"
    "       \\limit{x}\n"
    "       Expands to a limit, i.e. \\limit{x \\to 0}.\n"
    "\n"
    "       \\overline{X}\n"
    "       Draws a line above expression X\n"
    "\n"
    "       \\underline{X}\n"
    "       Draws a line under expression X\n"
    "\n"
    "       \\lceil\n"
    "       Left ceiling symbol\n"
    "\n"
    "       \\rceil\n"
    "       Right ceiling symbol\n"
    "\n"
    "       \\lfloor\n"
    "       Left floor symbol\n"
    "\n"
    "       \\rfloor\n"
    "       Right floor symbol\n"
    "\n"
    "       \\\\\n"
    "       Insert a line break.\n"
    "\n"
    "       \\begin{array}[pos]{column alignments}\n"
    "          a00 & a01 & ... a0n \\\\\n"
    "          a10 & a11 & ... a1n \\\\\n"
    "          ... & ... & ... ... \\\\\n"
    "          am0 & am1 & ... amn\n"
    "       \\end{array}\n"
    "       Makes an array. The optional argument pos sets  the  alignment  of  the\n"
    "       array  to t(op), b(ottom) or c(enter). The column alignments consist of\n"
    "       one character per column, l(eft), c(enter), or r(ight). Currently asci-\n"
    "       iTeX  does  notsupport vertical or horizontal lines, e.g. the column-\n"
    "       alignment specification \"{|c|}\" will lead to  errors.  Note,  that  the\n"
    "       string  \\begin{array}  must  not contain spaces. Cells of the array may\n"
    "       contain formulas and sub-arrays.\n"
    "\n"
    "       \\a\n"
    "       Escapes the character a. Useful for inserting characters like ^, and  _\n"
    "       in your equation.\n"
    "\n"
    "\n"
    "EXAMPLES\n"
    "       You can copy and paste some of these examples in the equation input \n"
    "       field and hit generate to see what it does.\n"
    "\n"
    "\\frac{1}{1+x}\n"
    "\n"
    "\\lfloorx\\rfloor = x -\\frac{1}{2} + \\sum_{k=1}^{\\infty}\n"
    "\\frac{sin(2 Pi k x)}{pi k}\n"
    "\n"
    "\\begin{array}{ccc}\n"
    "x_{11} & x_{12} & x_{13}\\\\\n"
    "x_{21} & x_{22} & x_{23}\\\\\n"
    "x_{31} & x_{32} & x_{33}\n"
    "\\end{array}\n"
    "\n"
    "\\left[\n"
    "\\begin{array}{ccc}\n"
    "x_{11} & x_{12} & x_{13}\\\\\n"
    "x_{21} & x_{22} & x_{23}\\\\\n"
    "x_{31} & x_{32} & x_{33}\n"
    "\\end{array}\n"
    "\\right]\n"
    "\n"
    "\\int_0^W \\frac{np}{n+p}dx = \\int_0^W \\frac{n_0}{exp \\left( \n"
    "\\frac{E_0(x-x_0)}{kT} \\right)+exp \\left( -\\frac{E_0(x-x_0)}{kT}\\right)}\n"
    "dx=\\frac{n_0kT}{E_0} \\left[ arctan \\left( exp \n"
    "\\left[\\frac{E_0(x-x_0)}{kT}\\right]\\right)\\right]^{x=W}_{x=0}~ \n"
    "\\frac{n_0kT}{E_0} pi\n"
    "\n"
    "f(x) = \\left{\\begin{array}{lr} \n"
    "\\frac{1}{x+1} +12 & \\-12<x<0\\\\\n"
    " & \\\\ 13-x & x<\\-12, x>0\n"
    "\\end{array}\\right.\n"
    "\n"
    "a = \\frac{1}{\\sqrt{2} + \n"
    "\\frac{1}{\\sqrt{2} + \n"
    "\\frac{1}{\\sqrt{2} + \n"
    "\\frac{1}{\\sqrt{2} + ...\n"
    "}}}}\n"};
