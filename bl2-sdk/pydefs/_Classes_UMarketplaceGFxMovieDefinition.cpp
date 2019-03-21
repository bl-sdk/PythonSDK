#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketplaceGFxMovieDefinition()
{
    py::class_< UMarketplaceGFxMovieDefinition,  UWillowGFxMovie3DDefinition   >("UMarketplaceGFxMovieDefinition")
        .def_readwrite("DefaultFilterTag", &UMarketplaceGFxMovieDefinition::DefaultFilterTag)
        .def("StaticClass", &UMarketplaceGFxMovieDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}