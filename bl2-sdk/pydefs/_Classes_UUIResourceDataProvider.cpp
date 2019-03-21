#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIResourceDataProvider()
{
    py::class_< UUIResourceDataProvider,  UUIPropertyDataProvider   >("UUIResourceDataProvider")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIResourceDataProvider::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIResourceDataProvider::VfTable_IUIListElementCellProvider)
        .def("StaticClass", &UUIResourceDataProvider::StaticClass, py::return_value_policy::reference)
        .def("eventInitializeProvider", &UUIResourceDataProvider::eventInitializeProvider)
        .staticmethod("StaticClass")
  ;
}