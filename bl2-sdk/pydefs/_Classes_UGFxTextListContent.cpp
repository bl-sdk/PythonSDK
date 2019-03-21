#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxTextListContent()
{
    py::class_< UGFxTextListContent,  UObject   >("UGFxTextListContent")
        .def_readwrite("TextListContent", &UGFxTextListContent::TextListContent)
        .def("StaticClass", &UGFxTextListContent::StaticClass, py::return_value_policy::reference)
        .def("GetObjectForIndex", &UGFxTextListContent::GetObjectForIndex, py::return_value_policy::reference)
        .def("GetTextAndLabelForIndex", &UGFxTextListContent::GetTextAndLabelForIndex)
        .def("AddEntry", &UGFxTextListContent::AddEntry)
        .def("GetLength", &UGFxTextListContent::GetLength)
        .def("Empty", &UGFxTextListContent::Empty)
        .staticmethod("StaticClass")
  ;
}