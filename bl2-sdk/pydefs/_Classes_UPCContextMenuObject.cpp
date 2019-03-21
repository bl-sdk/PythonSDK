#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPCContextMenuObject()
{
    class_< UPCContextMenuObject, bases< UGFxMoviePlayer >  , boost::noncopyable>("UPCContextMenuObject", no_init)
        .def_readwrite("MenuListObject", &UPCContextMenuObject::MenuListObject)
        .def_readwrite("Str_Buy", &UPCContextMenuObject::Str_Buy)
        .def_readwrite("Str_BuyBack", &UPCContextMenuObject::Str_BuyBack)
        .def_readwrite("Str_Sell", &UPCContextMenuObject::Str_Sell)
        .def_readwrite("Str_SellTrash", &UPCContextMenuObject::Str_SellTrash)
        .def_readwrite("Str_Compare", &UPCContextMenuObject::Str_Compare)
        .def_readwrite("Str_Inspect", &UPCContextMenuObject::Str_Inspect)
        .def_readwrite("Str_SelectCompare", &UPCContextMenuObject::Str_SelectCompare)
        .def_readwrite("Str_Drop", &UPCContextMenuObject::Str_Drop)
        .def("StaticClass", &UPCContextMenuObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("AddToMenuItemList", &UPCContextMenuObject::AddToMenuItemList)
        .def("extOnMenuItemClicked", &UPCContextMenuObject::extOnMenuItemClicked)
        .def("extOnMenuAbort", &UPCContextMenuObject::extOnMenuAbort)
        .def("extOnMenuClosed", &UPCContextMenuObject::extOnMenuClosed)
        .def("ShowFor", &UPCContextMenuObject::ShowFor)
        .def("Show", &UPCContextMenuObject::Show)
        .def("AddMenuItems", &UPCContextMenuObject::AddMenuItems)
        .def("AddMenuItem", &UPCContextMenuObject::AddMenuItem)
        .def("FocusOn", &UPCContextMenuObject::FocusOn)
        .def("OnClose", &UPCContextMenuObject::OnClose)
        .def("Init", &UPCContextMenuObject::Init)
        .def("OnMenuItemClicked", &UPCContextMenuObject::OnMenuItemClicked)
        .def("OnMenuClosed", &UPCContextMenuObject::OnMenuClosed)
        .staticmethod("StaticClass")
  ;
}