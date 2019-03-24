#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGestaltPartMatricesCollectionDefinition(py::module &m)
{
    py::class_< UGestaltPartMatricesCollectionDefinition,  UGBXDefinition   >(m, "UGestaltPartMatricesCollectionDefinition")
		.def_static("StaticClass", &UGestaltPartMatricesCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Collection", &UGestaltPartMatricesCollectionDefinition::Collection)
          ;
}