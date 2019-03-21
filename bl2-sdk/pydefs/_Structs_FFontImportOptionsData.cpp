#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFontImportOptionsData(py::object m)
{
    py::class_< FFontImportOptionsData >(m, "FFontImportOptionsData")
        .def_readwrite("FontName", &FFontImportOptionsData::FontName)
        .def_readwrite("Height", &FFontImportOptionsData::Height)
        .def_readwrite("CharacterSet", &FFontImportOptionsData::CharacterSet)
        .def_readwrite("Chars", &FFontImportOptionsData::Chars)
        .def_readwrite("UnicodeRange", &FFontImportOptionsData::UnicodeRange)
        .def_readwrite("CharsFilePath", &FFontImportOptionsData::CharsFilePath)
        .def_readwrite("CharsFileWildcard", &FFontImportOptionsData::CharsFileWildcard)
        .def_readwrite("ForegroundColor", &FFontImportOptionsData::ForegroundColor)
        .def_readwrite("TexturePageWidth", &FFontImportOptionsData::TexturePageWidth)
        .def_readwrite("TexturePageMaxHeight", &FFontImportOptionsData::TexturePageMaxHeight)
        .def_readwrite("XPadding", &FFontImportOptionsData::XPadding)
        .def_readwrite("YPadding", &FFontImportOptionsData::YPadding)
        .def_readwrite("ExtendBoxTop", &FFontImportOptionsData::ExtendBoxTop)
        .def_readwrite("ExtendBoxBottom", &FFontImportOptionsData::ExtendBoxBottom)
        .def_readwrite("ExtendBoxRight", &FFontImportOptionsData::ExtendBoxRight)
        .def_readwrite("ExtendBoxLeft", &FFontImportOptionsData::ExtendBoxLeft)
        .def_readwrite("Kerning", &FFontImportOptionsData::Kerning)
        .def_readwrite("DistanceFieldScaleFactor", &FFontImportOptionsData::DistanceFieldScaleFactor)
        .def_readwrite("DistanceFieldScanRadiusScale", &FFontImportOptionsData::DistanceFieldScanRadiusScale)
  ;
}