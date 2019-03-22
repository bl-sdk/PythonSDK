#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxTextListContent(py::module &m)
{
    py::class_< UGFxTextListContent,  UObject   >(m, "UGFxTextListContent")
        .def_readwrite("TextListContent", &UGFxTextListContent::TextListContent)
        .def("GetObjectForIndex", &UGFxTextListContent::GetObjectForIndex, py::return_value_policy::reference)
        .def("GetTextAndLabelForIndex", &UGFxTextListContent::GetTextAndLabelForIndex)
        .def("AddEntry", &UGFxTextListContent::AddEntry)
        .def("GetLength", &UGFxTextListContent::GetLength)
        .def("Empty", &UGFxTextListContent::Empty)
          ;
}