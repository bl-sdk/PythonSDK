#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlinePlayerStorageArray(py::module &m)
{
    py::class_< UUIDataProvider_OnlinePlayerStorageArray,  UUIDataProvider   >(m, "UUIDataProvider_OnlinePlayerStorageArray")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataProvider_OnlinePlayerStorageArray::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_OnlinePlayerStorageArray::VfTable_IUIListElementCellProvider)
        .def_readwrite("PlayerStorage", &UUIDataProvider_OnlinePlayerStorageArray::PlayerStorage)
        .def_readwrite("PlayerStorageId", &UUIDataProvider_OnlinePlayerStorageArray::PlayerStorageId)
        .def_readwrite("PlayerStorageName", &UUIDataProvider_OnlinePlayerStorageArray::PlayerStorageName)
        .def_readwrite("ColumnHeaderText", &UUIDataProvider_OnlinePlayerStorageArray::ColumnHeaderText)
        .def_readwrite("Values", &UUIDataProvider_OnlinePlayerStorageArray::Values)
          ;
}