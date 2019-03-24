#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketplaceGFxMovieDefinition(py::module &m)
{
    py::class_< UMarketplaceGFxMovieDefinition,  UWillowGFxMovie3DDefinition   >(m, "UMarketplaceGFxMovieDefinition")
		.def_static("StaticClass", &UMarketplaceGFxMovieDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultFilterTag", &UMarketplaceGFxMovieDefinition::DefaultFilterTag)
          ;
}