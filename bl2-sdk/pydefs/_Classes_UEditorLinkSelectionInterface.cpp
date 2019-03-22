#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEditorLinkSelectionInterface(py::module &m)
{
    py::class_< UEditorLinkSelectionInterface,  UInterface   >(m, "UEditorLinkSelectionInterface")
        .def("StaticClass", &UEditorLinkSelectionInterface::StaticClass, py::return_value_policy::reference)
          ;
}