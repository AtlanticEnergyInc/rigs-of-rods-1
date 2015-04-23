#pragma once

// ----------------------------------------------------------------------------
// Generated by MyGUI's LayoutEditor using RoR's code templates.
// Find the templates at [repository]/tools/MyGUI_LayoutEditor/
//
// IMPORTANT:
// Do not modify this code directly. Create a derived class instead.
// ----------------------------------------------------------------------------

#include "ForwardDeclarations.h"
#include "BaseLayout.h"

namespace RoR
{

namespace GUI
{
	
ATTRIBUTE_CLASS_LAYOUT(MultiplayerSelectorLayout, "MultiPlayerSelector.layout");
class MultiplayerSelectorLayout : public wraps::BaseLayout
{

public:

	MultiplayerSelectorLayout(MyGUI::Widget* _parent = nullptr);
	virtual ~MultiplayerSelectorLayout();

protected:

	//%LE Widget_Declaration list start
	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_joinbutton, "joinbutton");
	MyGUI::Button* m_joinbutton;

	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_servers_list, "servers_list");
	MyGUI::MultiListBox* m_servers_list;

	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_server_name, "server_name");
	MyGUI::MultiListItem* m_server_name;

	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_server_ip, "server_ip");
	MyGUI::MultiListItem* m_server_ip;

	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_server_map, "server_map");
	MyGUI::MultiListItem* m_server_map;

	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_server_slots, "server_slots");
	MyGUI::MultiListItem* m_server_slots;

	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_settingsbutton, "settingsbutton");
	MyGUI::Button* m_settingsbutton;

	ATTRIBUTE_FIELD_WIDGET_NAME(MultiplayerSelectorLayout, m_ror_net_ver, "ror_net_ver");
	MyGUI::EditBox* m_ror_net_ver;

	//%LE Widget_Declaration list end
};

} // namespace GUI

} // namespace RoR

