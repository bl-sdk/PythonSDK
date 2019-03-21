#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMultitypeScrollingListGFxObject()
{
    class_< UMultitypeScrollingListGFxObject, bases< UGFxObject >  , boost::noncopyable>("UMultitypeScrollingListGFxObject", no_init)
        .def_readwrite("ParentPanel", &UMultitypeScrollingListGFxObject::ParentPanel)
        .def_readonly("UnknownData00", &UMultitypeScrollingListGFxObject::UnknownData00)
        .def("StaticClass", &UMultitypeScrollingListGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("ContinueInitialInit", &UMultitypeScrollingListGFxObject::ContinueInitialInit)
        .def("extGameScroll", &UMultitypeScrollingListGFxObject::extGameScroll)
        .def("getRendererAt", &UMultitypeScrollingListGFxObject::getRendererAt, return_value_policy< reference_existing_object >())
        .def("SetEquippingState", &UMultitypeScrollingListGFxObject::SetEquippingState)
        .def("extSetRendererInfo", &UMultitypeScrollingListGFxObject::extSetRendererInfo)
        .def("Init", &UMultitypeScrollingListGFxObject::Init)
        .def("InitMultitype", &UMultitypeScrollingListGFxObject::InitMultitype)
        .def("eventSetSelectedIndex", &UScrollingListGFxObject::eventSetSelectedIndex)
        .def("ScrollToIndex", &UScrollingListGFxObject::ScrollToIndex)
        .staticmethod("StaticClass")
  ;
}