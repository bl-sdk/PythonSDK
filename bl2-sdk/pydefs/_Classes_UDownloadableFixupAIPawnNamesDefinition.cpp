#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableFixupAIPawnNamesDefinition()
{
    py::class_< UDownloadableFixupAIPawnNamesDefinition,  UGBXDefinition   >("UDownloadableFixupAIPawnNamesDefinition")
        .def_readwrite("PlayThroughThree", &UDownloadableFixupAIPawnNamesDefinition::PlayThroughThree)
        .def("StaticClass", &UDownloadableFixupAIPawnNamesDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}