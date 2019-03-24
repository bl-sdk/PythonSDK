#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopUpDebugBarGraph(py::module &m)
{
    py::class_< UPopUpDebugBarGraph,  UObject   >(m, "UPopUpDebugBarGraph")
		.def_static("StaticClass", &UPopUpDebugBarGraph::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Columns", &UPopUpDebugBarGraph::Columns)
        .def_readwrite("TitleText", &UPopUpDebugBarGraph::TitleText)
        .def_readwrite("BaseLineColor", &UPopUpDebugBarGraph::BaseLineColor)
        .def_readwrite("TitleTextColor", &UPopUpDebugBarGraph::TitleTextColor)
        .def_readwrite("ColumnWidth", &UPopUpDebugBarGraph::ColumnWidth)
        .def_readwrite("ColumnPadding", &UPopUpDebugBarGraph::ColumnPadding)
        .def_readwrite("ColumnMaxHeight", &UPopUpDebugBarGraph::ColumnMaxHeight)
        .def_readwrite("TextScale", &UPopUpDebugBarGraph::TextScale)
        .def_readwrite("TextPadding", &UPopUpDebugBarGraph::TextPadding)
        .def_readwrite("TitleTextScale", &UPopUpDebugBarGraph::TitleTextScale)
        .def_readwrite("TitleTextPaddingY", &UPopUpDebugBarGraph::TitleTextPaddingY)
        .def_readwrite("ColumnValueTextOffsetY", &UPopUpDebugBarGraph::ColumnValueTextOffsetY)
        .def("Display", &UPopUpDebugBarGraph::Display)
        .def("GetValue", &UPopUpDebugBarGraph::GetValue)
        .def("SetValue", &UPopUpDebugBarGraph::SetValue)
        .def("AddNewColumn", &UPopUpDebugBarGraph::AddNewColumn)
        .def("AddTitleText", &UPopUpDebugBarGraph::AddTitleText)
          ;
}