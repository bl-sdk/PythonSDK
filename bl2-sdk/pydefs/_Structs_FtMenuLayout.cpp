#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FtMenuLayout(py::object m)
{
    py::class_< FtMenuLayout >(m, "FtMenuLayout")
        .def_readwrite("Background", &FtMenuLayout::Background)
        .def_readwrite("BackgroundXPos", &FtMenuLayout::BackgroundXPos)
        .def_readwrite("BackgroundYPos", &FtMenuLayout::BackgroundYPos)
        .def_readwrite("BackgroundXL", &FtMenuLayout::BackgroundXL)
        .def_readwrite("BackgroundYL", &FtMenuLayout::BackgroundYL)
        .def_readwrite("ColumnDataYL", &FtMenuLayout::ColumnDataYL)
        .def_readwrite("ItemDetailYL", &FtMenuLayout::ItemDetailYL)
        .def_readwrite("DescriptionBoxHeader", &FtMenuLayout::DescriptionBoxHeader)
        .def_readwrite("DescriptionBoxHeaderHAlign", &FtMenuLayout::DescriptionBoxHeaderHAlign)
        .def_readwrite("DescriptionBoxXPos", &FtMenuLayout::DescriptionBoxXPos)
        .def_readwrite("DescriptionBoxYPos", &FtMenuLayout::DescriptionBoxYPos)
        .def_readwrite("DescriptionBoxXL", &FtMenuLayout::DescriptionBoxXL)
        .def_readwrite("TitlePos", &FtMenuLayout::TitlePos)
        .def_readwrite("HintPos", &FtMenuLayout::HintPos)
        .def_readwrite("ColumnPadding", &FtMenuLayout::ColumnPadding)
        .def_readwrite("ColumnLayout", &FtMenuLayout::ColumnLayout)
        .def_readwrite("ColumnDataFont", &FtMenuLayout::ColumnDataFont)
  ;
}