class RFFSHeli_Apache_Teddy5 extends RFFSHeli_Apache
{
	void RFFSHeli_Apache_Teddy5() 
	{
		c_heli_wreck_model = "RFFSHeli_Apache_Teddy5_Wreck";
	}
	
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Apache;
			if ( Class.CastTo(entity_Apache, this) )
			{
				entity_Apache.GetInventory().CreateAttachment( "RFFSHeli_Apache_Driverdoor_Teddy5" );
				entity_Apache.GetInventory().CreateAttachment( "RFFSHeli_Apache_Codriverdoor_Teddy5" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Apache_Teddy5_Wreck extends RFFSHeli_Apache_Wreck {}