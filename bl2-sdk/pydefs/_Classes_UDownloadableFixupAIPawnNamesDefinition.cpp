#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableFixupAIPawnNamesDefinition(py::module &m)
{
    py::class_< UDownloadableFixupAIPawnNamesDefinition,  UGBXDefinition   >(m, "UDownloadableFixupAIPawnNamesDefinition")
		.def_static("StaticClass", &UDownloadableFixupAIPawnNamesDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PlayThroughThree", &UDownloadableFixupAIPawnNamesDefinition::PlayThroughThree)
          ;
}