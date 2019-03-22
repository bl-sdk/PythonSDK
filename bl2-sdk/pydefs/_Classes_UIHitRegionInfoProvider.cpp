#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIHitRegionInfoProvider(py::module &m)
{
    py::class_< UIHitRegionInfoProvider,  UInterface   >(m, "UIHitRegionInfoProvider")
        .def("StaticClass", &UIHitRegionInfoProvider::StaticClass, py::return_value_policy::reference)
        .def("GetHitRegions", [](UIHitRegionInfoProvider &self , TArray< class UBodyHitRegionDefinition* >* Regions) { class UBodyHitRegionDefinition** pyDefaultRegion = 0 ;   self.GetHitRegions(Regions, pyDefaultRegion); return py::make_tuple(*pyDefaultRegion); })
          ;
}