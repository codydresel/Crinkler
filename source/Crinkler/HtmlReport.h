#ifndef _HTML_REPORT_H_
#define _HTML_REPORT_H_

enum ReportTheme { REPORT_THEME_DARK, REPORT_THEME_LIGHT, REPORT_THEME_AUTO };

static const char *ReportThemeName(ReportTheme theme) {
	switch (theme) {
	case REPORT_THEME_DARK:
		return "DARK";
	case REPORT_THEME_LIGHT:
		return "LIGHT";
	case REPORT_THEME_AUTO:
		return "AUTO";
	}
	return "";
}

struct CompressionReportRecord;
class Hunk;
class Crinkler;
void HtmlReport(CompressionReportRecord* csr, const char* filename, Hunk& hunk, Hunk& untransformedHunk, const int* sizefill,
	const char *exefilename, int filesize, Crinkler *crinkler);

#endif