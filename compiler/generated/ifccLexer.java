// Generated from ifcc.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ifccLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, RIGHTSHIFT=8, 
		LEFTSHIFT=9, MULTIPLY=10, DIVIDE=11, MOD=12, DECREMENT=13, MINUS=14, INCREMENT=15, 
		PLUS=16, LESSEQUAL=17, LESS=18, GREATEREQUAL=19, GREATER=20, NOTEQUAL=21, 
		EQUAL=22, BAND=23, BXOR=24, BOR=25, AND=26, OR=27, EGAL=28, NOT=29, BNOT=30, 
		IF=31, ELSEIF=32, ELSE=33, RETURN=34, TYPE=35, NUMBER=36, CHAR=37, COMMENT=38, 
		DIRECTIVE=39, WS=40, VAR=41;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "RIGHTSHIFT", 
			"LEFTSHIFT", "MULTIPLY", "DIVIDE", "MOD", "DECREMENT", "MINUS", "INCREMENT", 
			"PLUS", "LESSEQUAL", "LESS", "GREATEREQUAL", "GREATER", "NOTEQUAL", "EQUAL", 
			"BAND", "BXOR", "BOR", "AND", "OR", "EGAL", "NOT", "BNOT", "IF", "ELSEIF", 
			"ELSE", "RETURN", "TYPE", "NUMBER", "CHAR", "COMMENT", "DIRECTIVE", "WS", 
			"VAR"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'{'", "'}'", "'('", "')'", "','", "'while('", "';'", "'>>'", "'<<'", 
			"'*'", "'/'", "'%'", "'--'", "'-'", "'++'", "'+'", "'<='", "'<'", "'>='", 
			"'>'", "'!='", "'=='", "'&'", "'^'", "'|'", "'&&'", "'||'", "'='", "'!'", 
			"'~'", "'if'", "'else if'", "'else'", "'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, "RIGHTSHIFT", "LEFTSHIFT", 
			"MULTIPLY", "DIVIDE", "MOD", "DECREMENT", "MINUS", "INCREMENT", "PLUS", 
			"LESSEQUAL", "LESS", "GREATEREQUAL", "GREATER", "NOTEQUAL", "EQUAL", 
			"BAND", "BXOR", "BOR", "AND", "OR", "EGAL", "NOT", "BNOT", "IF", "ELSEIF", 
			"ELSE", "RETURN", "TYPE", "NUMBER", "CHAR", "COMMENT", "DIRECTIVE", "WS", 
			"VAR"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public ifccLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "ifcc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2+\u00f8\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3"+
		"\t\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\16\3\17\3"+
		"\17\3\20\3\20\3\20\3\21\3\21\3\22\3\22\3\22\3\23\3\23\3\24\3\24\3\24\3"+
		"\25\3\25\3\26\3\26\3\26\3\27\3\27\3\27\3\30\3\30\3\31\3\31\3\32\3\32\3"+
		"\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3 \3 \3 \3"+
		"!\3!\3!\3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\3$\3$"+
		"\3$\3$\3$\3$\3$\3$\3$\3$\3$\5$\u00c3\n$\3%\5%\u00c6\n%\3%\6%\u00c9\n%"+
		"\r%\16%\u00ca\3&\3&\6&\u00cf\n&\r&\16&\u00d0\3&\3&\3\'\3\'\3\'\3\'\7\'"+
		"\u00d9\n\'\f\'\16\'\u00dc\13\'\3\'\3\'\3\'\3\'\3\'\3(\3(\7(\u00e5\n(\f"+
		"(\16(\u00e8\13(\3(\3(\3(\3(\3)\3)\3)\3)\3*\3*\7*\u00f4\n*\f*\16*\u00f7"+
		"\13*\4\u00da\u00e6\2+\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27"+
		"\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33"+
		"\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+\3\2\6\3\2\62;\6\2\62;C"+
		"\\aac|\5\2\13\f\17\17\"\"\4\2C\\c|\2\u00ff\2\3\3\2\2\2\2\5\3\2\2\2\2\7"+
		"\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2"+
		"\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2"+
		"\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2"+
		"\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2"+
		"\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2"+
		"\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M"+
		"\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\3U\3\2\2\2\5W\3\2\2\2\7Y\3\2"+
		"\2\2\t[\3\2\2\2\13]\3\2\2\2\r_\3\2\2\2\17f\3\2\2\2\21h\3\2\2\2\23k\3\2"+
		"\2\2\25n\3\2\2\2\27p\3\2\2\2\31r\3\2\2\2\33t\3\2\2\2\35w\3\2\2\2\37y\3"+
		"\2\2\2!|\3\2\2\2#~\3\2\2\2%\u0081\3\2\2\2\'\u0083\3\2\2\2)\u0086\3\2\2"+
		"\2+\u0088\3\2\2\2-\u008b\3\2\2\2/\u008e\3\2\2\2\61\u0090\3\2\2\2\63\u0092"+
		"\3\2\2\2\65\u0094\3\2\2\2\67\u0097\3\2\2\29\u009a\3\2\2\2;\u009c\3\2\2"+
		"\2=\u009e\3\2\2\2?\u00a0\3\2\2\2A\u00a3\3\2\2\2C\u00ab\3\2\2\2E\u00b0"+
		"\3\2\2\2G\u00c2\3\2\2\2I\u00c5\3\2\2\2K\u00cc\3\2\2\2M\u00d4\3\2\2\2O"+
		"\u00e2\3\2\2\2Q\u00ed\3\2\2\2S\u00f1\3\2\2\2UV\7}\2\2V\4\3\2\2\2WX\7\177"+
		"\2\2X\6\3\2\2\2YZ\7*\2\2Z\b\3\2\2\2[\\\7+\2\2\\\n\3\2\2\2]^\7.\2\2^\f"+
		"\3\2\2\2_`\7y\2\2`a\7j\2\2ab\7k\2\2bc\7n\2\2cd\7g\2\2de\7*\2\2e\16\3\2"+
		"\2\2fg\7=\2\2g\20\3\2\2\2hi\7@\2\2ij\7@\2\2j\22\3\2\2\2kl\7>\2\2lm\7>"+
		"\2\2m\24\3\2\2\2no\7,\2\2o\26\3\2\2\2pq\7\61\2\2q\30\3\2\2\2rs\7\'\2\2"+
		"s\32\3\2\2\2tu\7/\2\2uv\7/\2\2v\34\3\2\2\2wx\7/\2\2x\36\3\2\2\2yz\7-\2"+
		"\2z{\7-\2\2{ \3\2\2\2|}\7-\2\2}\"\3\2\2\2~\177\7>\2\2\177\u0080\7?\2\2"+
		"\u0080$\3\2\2\2\u0081\u0082\7>\2\2\u0082&\3\2\2\2\u0083\u0084\7@\2\2\u0084"+
		"\u0085\7?\2\2\u0085(\3\2\2\2\u0086\u0087\7@\2\2\u0087*\3\2\2\2\u0088\u0089"+
		"\7#\2\2\u0089\u008a\7?\2\2\u008a,\3\2\2\2\u008b\u008c\7?\2\2\u008c\u008d"+
		"\7?\2\2\u008d.\3\2\2\2\u008e\u008f\7(\2\2\u008f\60\3\2\2\2\u0090\u0091"+
		"\7`\2\2\u0091\62\3\2\2\2\u0092\u0093\7~\2\2\u0093\64\3\2\2\2\u0094\u0095"+
		"\7(\2\2\u0095\u0096\7(\2\2\u0096\66\3\2\2\2\u0097\u0098\7~\2\2\u0098\u0099"+
		"\7~\2\2\u00998\3\2\2\2\u009a\u009b\7?\2\2\u009b:\3\2\2\2\u009c\u009d\7"+
		"#\2\2\u009d<\3\2\2\2\u009e\u009f\7\u0080\2\2\u009f>\3\2\2\2\u00a0\u00a1"+
		"\7k\2\2\u00a1\u00a2\7h\2\2\u00a2@\3\2\2\2\u00a3\u00a4\7g\2\2\u00a4\u00a5"+
		"\7n\2\2\u00a5\u00a6\7u\2\2\u00a6\u00a7\7g\2\2\u00a7\u00a8\7\"\2\2\u00a8"+
		"\u00a9\7k\2\2\u00a9\u00aa\7h\2\2\u00aaB\3\2\2\2\u00ab\u00ac\7g\2\2\u00ac"+
		"\u00ad\7n\2\2\u00ad\u00ae\7u\2\2\u00ae\u00af\7g\2\2\u00afD\3\2\2\2\u00b0"+
		"\u00b1\7t\2\2\u00b1\u00b2\7g\2\2\u00b2\u00b3\7v\2\2\u00b3\u00b4\7w\2\2"+
		"\u00b4\u00b5\7t\2\2\u00b5\u00b6\7p\2\2\u00b6F\3\2\2\2\u00b7\u00b8\7k\2"+
		"\2\u00b8\u00b9\7p\2\2\u00b9\u00c3\7v\2\2\u00ba\u00bb\7e\2\2\u00bb\u00bc"+
		"\7j\2\2\u00bc\u00bd\7c\2\2\u00bd\u00c3\7t\2\2\u00be\u00bf\7x\2\2\u00bf"+
		"\u00c0\7q\2\2\u00c0\u00c1\7k\2\2\u00c1\u00c3\7f\2\2\u00c2\u00b7\3\2\2"+
		"\2\u00c2\u00ba\3\2\2\2\u00c2\u00be\3\2\2\2\u00c3H\3\2\2\2\u00c4\u00c6"+
		"\5\35\17\2\u00c5\u00c4\3\2\2\2\u00c5\u00c6\3\2\2\2\u00c6\u00c8\3\2\2\2"+
		"\u00c7\u00c9\t\2\2\2\u00c8\u00c7\3\2\2\2\u00c9\u00ca\3\2\2\2\u00ca\u00c8"+
		"\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cbJ\3\2\2\2\u00cc\u00ce\7)\2\2\u00cd\u00cf"+
		"\t\3\2\2\u00ce\u00cd\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0\u00ce\3\2\2\2\u00d0"+
		"\u00d1\3\2\2\2\u00d1\u00d2\3\2\2\2\u00d2\u00d3\7)\2\2\u00d3L\3\2\2\2\u00d4"+
		"\u00d5\7\61\2\2\u00d5\u00d6\7,\2\2\u00d6\u00da\3\2\2\2\u00d7\u00d9\13"+
		"\2\2\2\u00d8\u00d7\3\2\2\2\u00d9\u00dc\3\2\2\2\u00da\u00db\3\2\2\2\u00da"+
		"\u00d8\3\2\2\2\u00db\u00dd\3\2\2\2\u00dc\u00da\3\2\2\2\u00dd\u00de\7,"+
		"\2\2\u00de\u00df\7\61\2\2\u00df\u00e0\3\2\2\2\u00e0\u00e1\b\'\2\2\u00e1"+
		"N\3\2\2\2\u00e2\u00e6\7%\2\2\u00e3\u00e5\13\2\2\2\u00e4\u00e3\3\2\2\2"+
		"\u00e5\u00e8\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e6\u00e4\3\2\2\2\u00e7\u00e9"+
		"\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e9\u00ea\7\f\2\2\u00ea\u00eb\3\2\2\2\u00eb"+
		"\u00ec\b(\2\2\u00ecP\3\2\2\2\u00ed\u00ee\t\4\2\2\u00ee\u00ef\3\2\2\2\u00ef"+
		"\u00f0\b)\3\2\u00f0R\3\2\2\2\u00f1\u00f5\t\5\2\2\u00f2\u00f4\t\3\2\2\u00f3"+
		"\u00f2\3\2\2\2\u00f4\u00f7\3\2\2\2\u00f5\u00f3\3\2\2\2\u00f5\u00f6\3\2"+
		"\2\2\u00f6T\3\2\2\2\u00f7\u00f5\3\2\2\2\n\2\u00c2\u00c5\u00ca\u00d0\u00da"+
		"\u00e6\u00f5\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}