class RFFSHeli_CH47_Teddy1 extends RFFSHeli_CH47
{
	void RFFSHeli_CH47_Teddy1() 
	{
		c_heli_wreck_model = "RFFSHeli_CH47_Teddy1_wreck";
	}

	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_CH47;
			if ( Class.CastTo(entity_CH47, this) )
			{
				entity_CH47.GetInventory().CreateAttachment( "RFFSHeli_CH47_Teddy1" );
				entity_CH47.GetInventory().CreateAttachment( "RFFSHeli_CH47_Teddy1" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
	
}

class RFFSHeli_CH47_Teddy1_wreck extends RFFSHeli_CH47_wreck {}