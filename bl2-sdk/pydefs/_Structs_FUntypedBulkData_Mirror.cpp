#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUntypedBulkData_Mirror()
{
    py::class_< FUntypedBulkData_Mirror >("FUntypedBulkData_Mirror")
        .def_readwrite("VfTable", &FUntypedBulkData_Mirror::VfTable)
        .def_readwrite("BulkDataFlags", &FUntypedBulkData_Mirror::BulkDataFlags)
        .def_readwrite("ElementCount", &FUntypedBulkData_Mirror::ElementCount)
        .def_readwrite("BulkDataOffsetInFile", &FUntypedBulkData_Mirror::BulkDataOffsetInFile)
        .def_readwrite("BulkDataSizeOnDisk", &FUntypedBulkData_Mirror::BulkDataSizeOnDisk)
        .def_readwrite("SavedBulkDataFlags", &FUntypedBulkData_Mirror::SavedBulkDataFlags)
        .def_readwrite("SavedElementCount", &FUntypedBulkData_Mirror::SavedElementCount)
        .def_readwrite("SavedBulkDataOffsetInFile", &FUntypedBulkData_Mirror::SavedBulkDataOffsetInFile)
        .def_readwrite("SavedBulkDataSizeOnDisk", &FUntypedBulkData_Mirror::SavedBulkDataSizeOnDisk)
        .def_readwrite("BulkData", &FUntypedBulkData_Mirror::BulkData)
        .def_readwrite("LockStatus", &FUntypedBulkData_Mirror::LockStatus)
        .def_readwrite("AttachedAr", &FUntypedBulkData_Mirror::AttachedAr)
        .def_readwrite("bShouldFreeOnEmpty", &FUntypedBulkData_Mirror::bShouldFreeOnEmpty)
  ;
}