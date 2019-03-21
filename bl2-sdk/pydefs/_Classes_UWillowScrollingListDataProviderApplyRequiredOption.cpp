#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderApplyRequiredOption()
{
    class_< UWillowScrollingListDataProviderApplyRequiredOption, bases< UWillowScrollingListDataProviderOptionsBase >  , boost::noncopyable>("UWillowScrollingListDataProviderApplyRequiredOption", no_init)
        .def_readwrite("CurrentSettingValue", &UWillowScrollingListDataProviderApplyRequiredOption::CurrentSettingValue)
        .def_readwrite("CurrentSpinnerValue", &UWillowScrollingListDataProviderApplyRequiredOption::CurrentSpinnerValue)
        .def_readwrite("SettingName", &UWillowScrollingListDataProviderApplyRequiredOption::SettingName)
        .def_readwrite("LocalizedSettingCaptionString", &UWillowScrollingListDataProviderApplyRequiredOption::LocalizedSettingCaptionString)
        .def_readwrite("LocalizedSettingDescriptionString", &UWillowScrollingListDataProviderApplyRequiredOption::LocalizedSettingDescriptionString)
        .def("StaticClass", &UWillowScrollingListDataProviderApplyRequiredOption::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleSpinnerChange", &UWillowScrollingListDataProviderApplyRequiredOption::HandleSpinnerChange)
        .def("Populate", &UWillowScrollingListDataProviderApplyRequiredOption::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderApplyRequiredOption::HandleClick)
        .staticmethod("StaticClass")
  ;
}