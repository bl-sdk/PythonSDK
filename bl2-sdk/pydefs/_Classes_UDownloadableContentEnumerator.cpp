#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableContentEnumerator(py::module &m)
{
    py::class_< UDownloadableContentEnumerator,  UObject   >(m, "UDownloadableContentEnumerator")
		.def_static("StaticClass", &UDownloadableContentEnumerator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DLCBundles", &UDownloadableContentEnumerator::DLCBundles)
        .def_readwrite("NamedDLCBundles", &UDownloadableContentEnumerator::NamedDLCBundles)
        .def_readwrite("NamedDLCCompatibilityBundles", &UDownloadableContentEnumerator::NamedDLCCompatibilityBundles)
        .def_readwrite("CurrentEnumerationState", &UDownloadableContentEnumerator::CurrentEnumerationState)
        .def_readwrite("DLCRootDir", &UDownloadableContentEnumerator::DLCRootDir)
        .def_readwrite("FindDLCDelegates", &UDownloadableContentEnumerator::FindDLCDelegates)
        .def_readwrite("OldCompatibilityBundles", &UDownloadableContentEnumerator::OldCompatibilityBundles)
        .def("SetNeedsRefresh", &UDownloadableContentEnumerator::SetNeedsRefresh)
        .def("IsBusy", &UDownloadableContentEnumerator::IsBusy)
        .def("TriggerFindDLCDelegates", &UDownloadableContentEnumerator::TriggerFindDLCDelegates)
        .def("InstallAllDLC", &UDownloadableContentEnumerator::InstallAllDLC)
        .def("DeleteDLC", &UDownloadableContentEnumerator::DeleteDLC)
        .def("ClearFindDLCDelegate", &UDownloadableContentEnumerator::ClearFindDLCDelegate)
        .def("AddFindDLCDelegate", &UDownloadableContentEnumerator::AddFindDLCDelegate)
        .def("OnFindDLCComplete", &UDownloadableContentEnumerator::OnFindDLCComplete)
        .def("FindDLC", &UDownloadableContentEnumerator::FindDLC)
          ;
}