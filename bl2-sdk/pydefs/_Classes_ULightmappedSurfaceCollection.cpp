#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightmappedSurfaceCollection(py::module &m)
{
    py::class_< ULightmappedSurfaceCollection,  UObject   >(m, "ULightmappedSurfaceCollection")
        .def_readwrite("SourceModel", &ULightmappedSurfaceCollection::SourceModel)
        .def_readwrite("Surfaces", &ULightmappedSurfaceCollection::Surfaces)
        .def("StaticClass", &ULightmappedSurfaceCollection::StaticClass, py::return_value_policy::reference)
          ;
}