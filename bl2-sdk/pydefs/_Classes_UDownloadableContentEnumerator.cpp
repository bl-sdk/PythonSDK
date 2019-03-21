#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableContentEnumerator()
{
    class_< UDownloadableContentEnumerator, bases< UObject >  , boost::noncopyable>("UDownloadableContentEnumerator", no_init)
        .def_readwrite("DLCBundles", &UDownloadableContentEnumerator::DLCBundles)
        .def_readwrite("NamedDLCBundles", &UDownloadableContentEnumerator::NamedDLCBundles)
        .def_readwrite("NamedDLCCompatibilityBundles", &UDownloadableContentEnumerator::NamedDLCCompatibilityBundles)
        .def_readwrite("CurrentEnumerationState", &UDownloadableContentEnumerator::CurrentEnumerationState)
        .def_readwrite("DLCRootDir", &UDownloadableContentEnumerator::DLCRootDir)
        .def_readwrite("FindDLCDelegates", &UDownloadableContentEnumerator::FindDLCDelegates)
        .def_readwrite("OldCompatibilityBundles", &UDownloadableContentEnumerator::OldCompatibilityBundles)
        .def("StaticClass", &UDownloadableContentEnumerator::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetNeedsRefresh", &UDownloadableContentEnumerator::SetNeedsRefresh)
        .def("IsBusy", &UDownloadableContentEnumerator::IsBusy)
        .def("TriggerFindDLCDelegates", &UDownloadableContentEnumerator::TriggerFindDLCDelegates)
        .def("InstallAllDLC", &UDownloadableContentEnumerator::InstallAllDLC)
        .def("DeleteDLC", &UDownloadableContentEnumerator::DeleteDLC)
        .def("ClearFindDLCDelegate", &UDownloadableContentEnumerator::ClearFindDLCDelegate)
        .def("AddFindDLCDelegate", &UDownloadableContentEnumerator::AddFindDLCDelegate)
        .def("OnFindDLCComplete", &UDownloadableContentEnumerator::OnFindDLCComplete)
        .def("FindDLC", &UDownloadableContentEnumerator::FindDLC)
        .staticmethod("StaticClass")
  ;
}