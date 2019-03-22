#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPartListCollectionDefinition(py::module &m)
{
    py::class_< UItemPartListCollectionDefinition,  UInventoryPartListCollectionDefinition   >(m, "UItemPartListCollectionDefinition")
        .def_readwrite("AssociatedItem", &UItemPartListCollectionDefinition::AssociatedItem)
        .def_readwrite("AlphaPartData", &UItemPartListCollectionDefinition::AlphaPartData)
        .def_readwrite("BetaPartData", &UItemPartListCollectionDefinition::BetaPartData)
        .def_readwrite("GammaPartData", &UItemPartListCollectionDefinition::GammaPartData)
        .def_readwrite("DeltaPartData", &UItemPartListCollectionDefinition::DeltaPartData)
        .def_readwrite("EpsilonPartData", &UItemPartListCollectionDefinition::EpsilonPartData)
        .def_readwrite("ZetaPartData", &UItemPartListCollectionDefinition::ZetaPartData)
        .def_readwrite("EtaPartData", &UItemPartListCollectionDefinition::EtaPartData)
        .def_readwrite("ThetaPartData", &UItemPartListCollectionDefinition::ThetaPartData)
        .def_readwrite("MaterialPartData", &UItemPartListCollectionDefinition::MaterialPartData)
        .def("StaticClass", &UItemPartListCollectionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}