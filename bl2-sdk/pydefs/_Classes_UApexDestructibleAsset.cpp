#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexDestructibleAsset(py::object m)
{
    py::class_< UApexDestructibleAsset,  UApexAsset   >(m, "UApexDestructibleAsset")
        .def_readwrite("MApexAsset", &UApexDestructibleAsset::MApexAsset)
        .def_readwrite("Materials", &UApexDestructibleAsset::Materials)
        .def_readwrite("FractureMaterials", &UApexDestructibleAsset::FractureMaterials)
        .def_readwrite("DefaultPhysMaterial", &UApexDestructibleAsset::DefaultPhysMaterial)
        .def_readwrite("MDestructibleThumbnailComponent", &UApexDestructibleAsset::MDestructibleThumbnailComponent)
        .def_readwrite("CrumbleEmitterName", &UApexDestructibleAsset::CrumbleEmitterName)
        .def_readwrite("DustEmitterName", &UApexDestructibleAsset::DustEmitterName)
        .def_readwrite("DestructibleParameters", &UApexDestructibleAsset::DestructibleParameters)
        .def("StaticClass", &UApexDestructibleAsset::StaticClass, py::return_value_policy::reference)
          ;
}