#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGFxDataStoreBinding()
{
    py::class_< FGFxDataStoreBinding >("FGFxDataStoreBinding")
        .def_readwrite("DataSource", &FGFxDataStoreBinding::DataSource)
        .def_readwrite("VarPath", &FGFxDataStoreBinding::VarPath)
        .def_readwrite("ModelId", &FGFxDataStoreBinding::ModelId)
        .def_readwrite("ControlId", &FGFxDataStoreBinding::ControlId)
        .def_readwrite("CellTags", &FGFxDataStoreBinding::CellTags)
        .def_readwrite("ModelIdUtf8", &FGFxDataStoreBinding::ModelIdUtf8)
        .def_readwrite("ControlIdUtf8", &FGFxDataStoreBinding::ControlIdUtf8)
        .def_readwrite("ListDataProvider", &FGFxDataStoreBinding::ListDataProvider)
        .def_readonly("UnknownData00", &FGFxDataStoreBinding::UnknownData00)
        .def_readwrite("FullCellTags", &FGFxDataStoreBinding::FullCellTags)
        .def_readwrite("ModelRef", &FGFxDataStoreBinding::ModelRef)
        .def_readwrite("ControlRef", &FGFxDataStoreBinding::ControlRef)
  ;
}