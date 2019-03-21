#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlinePlayerStorageArray()
{
    class_< UUIDataProvider_OnlinePlayerStorageArray, bases< UUIDataProvider >  , boost::noncopyable>("UUIDataProvider_OnlinePlayerStorageArray", no_init)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataProvider_OnlinePlayerStorageArray::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_OnlinePlayerStorageArray::VfTable_IUIListElementCellProvider)
        .def_readwrite("PlayerStorage", &UUIDataProvider_OnlinePlayerStorageArray::PlayerStorage)
        .def_readwrite("PlayerStorageId", &UUIDataProvider_OnlinePlayerStorageArray::PlayerStorageId)
        .def_readwrite("PlayerStorageName", &UUIDataProvider_OnlinePlayerStorageArray::PlayerStorageName)
        .def_readwrite("ColumnHeaderText", &UUIDataProvider_OnlinePlayerStorageArray::ColumnHeaderText)
        .def_readwrite("Values", &UUIDataProvider_OnlinePlayerStorageArray::Values)
        .def("StaticClass", &UUIDataProvider_OnlinePlayerStorageArray::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}